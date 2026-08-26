// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEGRTNDURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEGRTNDURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveGrtnDurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveGrtnDurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveGrtnDurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveGrtnDurationRequest() = default ;
    DescribeLiveGrtnDurationRequest(const DescribeLiveGrtnDurationRequest &) = default ;
    DescribeLiveGrtnDurationRequest(DescribeLiveGrtnDurationRequest &&) = default ;
    DescribeLiveGrtnDurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveGrtnDurationRequest() = default ;
    DescribeLiveGrtnDurationRequest& operator=(const DescribeLiveGrtnDurationRequest &) = default ;
    DescribeLiveGrtnDurationRequest& operator=(DescribeLiveGrtnDurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->area_ == nullptr && this->endTime_ == nullptr && this->interval_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->startTime_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeLiveGrtnDurationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeLiveGrtnDurationRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveGrtnDurationRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeLiveGrtnDurationRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveGrtnDurationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveGrtnDurationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveGrtnDurationRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Application ID. You can query multiple application IDs separated by commas (half-width). A maximum of 30 IDs can be queried. By default, aggregated data for all applications is returned.
    shared_ptr<string> appId_ {};
    // The area code. Valid values:
    // - CN: Chinese mainland.
    // - OverSeas: Overseas regions.
    // - AP1: Asia Pacific 1, including Hong Kong (China), Macao (China), Taiwan (China), Japan, and Southeast Asian countries except Vietnam and Indonesia.
    // - AP2: Asia Pacific 2, including Indonesia, South Korea, and Vietnam.
    // - AP3: Asia Pacific 3, including Australia and New Zealand.
    // - NA: North America, including the United States and Canada.
    // - SA: South America, specifically Brazil.
    // - EU: Europe, including Ukraine, the United Kingdom, France, the Netherlands, Spain, Italy, Sweden, and Germany.
    // - MEAA: Middle East and Africa, including South Africa, Oman, the United Arab Emirates, and Kuwait.
    // 
    // If not specified, aggregated data for all areas is returned by default.
    shared_ptr<string> area_ {};
    // The end time must be later than the start time. The query granularity must be ≥ 5 minutes and ≤ 31 days. The date format follows the ISO 8601 notation and uses UTC time in the format: YYYY-MM-DDThh:mm:ssZ.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The time granularity for querying data. Unit: seconds. Valid values:
    // 
    // - 300
    // - 3600
    // - 86400
    // 
    // If not specified or an unsupported value is passed, the default value of 3600 seconds is used.
    shared_ptr<string> interval_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // The start time for data retrieval. The date format follows the ISO 8601 notation and uses UTC time in the format: YYYY-MM-DDThh:mm:ssZ.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
