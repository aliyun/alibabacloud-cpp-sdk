// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMEBPSDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMEBPSDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainRealTimeBpsDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainRealTimeBpsDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_TO_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainRealTimeBpsDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IspNameEn, ispNameEn_);
      DARABONBA_PTR_FROM_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainRealTimeBpsDataRequest() = default ;
    DescribeLiveDomainRealTimeBpsDataRequest(const DescribeLiveDomainRealTimeBpsDataRequest &) = default ;
    DescribeLiveDomainRealTimeBpsDataRequest(DescribeLiveDomainRealTimeBpsDataRequest &&) = default ;
    DescribeLiveDomainRealTimeBpsDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainRealTimeBpsDataRequest() = default ;
    DescribeLiveDomainRealTimeBpsDataRequest& operator=(const DescribeLiveDomainRealTimeBpsDataRequest &) = default ;
    DescribeLiveDomainRealTimeBpsDataRequest& operator=(DescribeLiveDomainRealTimeBpsDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->endTime_ != nullptr && this->ispNameEn_ != nullptr && this->locationNameEn_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->startTime_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainRealTimeBpsDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainRealTimeBpsDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ispNameEn Field Functions 
    bool hasIspNameEn() const { return this->ispNameEn_ != nullptr;};
    void deleteIspNameEn() { this->ispNameEn_ = nullptr;};
    inline string ispNameEn() const { DARABONBA_PTR_GET_DEFAULT(ispNameEn_, "") };
    inline DescribeLiveDomainRealTimeBpsDataRequest& setIspNameEn(string ispNameEn) { DARABONBA_PTR_SET_VALUE(ispNameEn_, ispNameEn) };


    // locationNameEn Field Functions 
    bool hasLocationNameEn() const { return this->locationNameEn_ != nullptr;};
    void deleteLocationNameEn() { this->locationNameEn_ = nullptr;};
    inline string locationNameEn() const { DARABONBA_PTR_GET_DEFAULT(locationNameEn_, "") };
    inline DescribeLiveDomainRealTimeBpsDataRequest& setLocationNameEn(string locationNameEn) { DARABONBA_PTR_SET_VALUE(locationNameEn_, locationNameEn) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveDomainRealTimeBpsDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveDomainRealTimeBpsDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainRealTimeBpsDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The streaming domain name or names.
    // 
    // Separate multiple domain names with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // >  If you do not set this parameter, the data of the hour following the specified start time is returned.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the Internet service provider (ISP).
    // 
    // To query ISPs, call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation.
    std::shared_ptr<string> ispNameEn_ = nullptr;
    // The name of the region in which you want to query data.
    // 
    // To query regions, call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation.
    std::shared_ptr<string> locationNameEn_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
