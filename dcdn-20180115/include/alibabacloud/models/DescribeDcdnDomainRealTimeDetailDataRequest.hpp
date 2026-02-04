// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEDETAILDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEDETAILDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeDetailDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeDetailDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_TO_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_TO_JSON(Merge, merge_);
      DARABONBA_PTR_TO_JSON(MergeLocIsp, mergeLocIsp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeDetailDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_FROM_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_FROM_JSON(Merge, merge_);
      DARABONBA_PTR_FROM_JSON(MergeLocIsp, mergeLocIsp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainRealTimeDetailDataRequest() = default ;
    DescribeDcdnDomainRealTimeDetailDataRequest(const DescribeDcdnDomainRealTimeDetailDataRequest &) = default ;
    DescribeDcdnDomainRealTimeDetailDataRequest(DescribeDcdnDomainRealTimeDetailDataRequest &&) = default ;
    DescribeDcdnDomainRealTimeDetailDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeDetailDataRequest() = default ;
    DescribeDcdnDomainRealTimeDetailDataRequest& operator=(const DescribeDcdnDomainRealTimeDetailDataRequest &) = default ;
    DescribeDcdnDomainRealTimeDetailDataRequest& operator=(DescribeDcdnDomainRealTimeDetailDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->endTime_ == nullptr && this->field_ == nullptr && this->ispNameEn_ == nullptr && this->locationNameEn_ == nullptr && this->merge_ == nullptr
        && this->mergeLocIsp_ == nullptr && this->startTime_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainRealTimeDetailDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainRealTimeDetailDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeDcdnDomainRealTimeDetailDataRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // ispNameEn Field Functions 
    bool hasIspNameEn() const { return this->ispNameEn_ != nullptr;};
    void deleteIspNameEn() { this->ispNameEn_ = nullptr;};
    inline string getIspNameEn() const { DARABONBA_PTR_GET_DEFAULT(ispNameEn_, "") };
    inline DescribeDcdnDomainRealTimeDetailDataRequest& setIspNameEn(string ispNameEn) { DARABONBA_PTR_SET_VALUE(ispNameEn_, ispNameEn) };


    // locationNameEn Field Functions 
    bool hasLocationNameEn() const { return this->locationNameEn_ != nullptr;};
    void deleteLocationNameEn() { this->locationNameEn_ = nullptr;};
    inline string getLocationNameEn() const { DARABONBA_PTR_GET_DEFAULT(locationNameEn_, "") };
    inline DescribeDcdnDomainRealTimeDetailDataRequest& setLocationNameEn(string locationNameEn) { DARABONBA_PTR_SET_VALUE(locationNameEn_, locationNameEn) };


    // merge Field Functions 
    bool hasMerge() const { return this->merge_ != nullptr;};
    void deleteMerge() { this->merge_ = nullptr;};
    inline string getMerge() const { DARABONBA_PTR_GET_DEFAULT(merge_, "") };
    inline DescribeDcdnDomainRealTimeDetailDataRequest& setMerge(string merge) { DARABONBA_PTR_SET_VALUE(merge_, merge) };


    // mergeLocIsp Field Functions 
    bool hasMergeLocIsp() const { return this->mergeLocIsp_ != nullptr;};
    void deleteMergeLocIsp() { this->mergeLocIsp_ = nullptr;};
    inline string getMergeLocIsp() const { DARABONBA_PTR_GET_DEFAULT(mergeLocIsp_, "") };
    inline DescribeDcdnDomainRealTimeDetailDataRequest& setMergeLocIsp(string mergeLocIsp) { DARABONBA_PTR_SET_VALUE(mergeLocIsp_, mergeLocIsp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainRealTimeDetailDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The accelerated domain name. Separate multiple accelerated domain names with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > The end time must be later than the start time, and the maximum time range to query is 10 minutes.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The type of information that you want to query. Separate multiple types with commas (,). Valid values:
    // 
    // *   **qps**: queries per second (QPS)
    // *   **bps**: bandwidth
    // *   **http_code**: HTTP status code
    // 
    // This parameter is required.
    shared_ptr<string> field_ {};
    // The name of the ISP. You can call the [DescribeDcdnRegionAndIsp](~~DescribeDcdnRegionAndIsp~~) operation to obtain the ISP name.
    // 
    // If you do not set this parameter, data of all ISPs is queried.
    shared_ptr<string> ispNameEn_ {};
    // The name of the region. You can call the [DescribeDcdnRegionAndIsp](~~DescribeDcdnRegionAndIsp~~) operation to obtain the region name.
    // 
    // If you do not set this parameter, all regions are queried.
    shared_ptr<string> locationNameEn_ {};
    // Specifies whether to return a summary value. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // Default value: **false**.
    shared_ptr<string> merge_ {};
    // Specifies whether to return a summary value of **LocationNameEn** and **IspNameEn**. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // Default value: **false**.
    shared_ptr<string> mergeLocIsp_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
