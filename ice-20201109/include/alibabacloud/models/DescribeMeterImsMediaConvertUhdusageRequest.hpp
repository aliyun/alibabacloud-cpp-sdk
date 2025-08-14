// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMEDIACONVERTUHDUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMEDIACONVERTUHDUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsMediaConvertUHDUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsMediaConvertUHDUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTs, startTs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsMediaConvertUHDUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
    };
    DescribeMeterImsMediaConvertUHDUsageRequest() = default ;
    DescribeMeterImsMediaConvertUHDUsageRequest(const DescribeMeterImsMediaConvertUHDUsageRequest &) = default ;
    DescribeMeterImsMediaConvertUHDUsageRequest(DescribeMeterImsMediaConvertUHDUsageRequest &&) = default ;
    DescribeMeterImsMediaConvertUHDUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsMediaConvertUHDUsageRequest() = default ;
    DescribeMeterImsMediaConvertUHDUsageRequest& operator=(const DescribeMeterImsMediaConvertUHDUsageRequest &) = default ;
    DescribeMeterImsMediaConvertUHDUsageRequest& operator=(DescribeMeterImsMediaConvertUHDUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTs_ != nullptr
        && this->interval_ != nullptr && this->regionId_ != nullptr && this->startTs_ != nullptr; };
    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline int64_t endTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
    inline DescribeMeterImsMediaConvertUHDUsageRequest& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeMeterImsMediaConvertUHDUsageRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMeterImsMediaConvertUHDUsageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline int64_t startTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
    inline DescribeMeterImsMediaConvertUHDUsageRequest& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


  protected:
    // The end of the time range to query. The value is a 10-digit timestamp.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTs_ = nullptr;
    // The time granularity of the query. Valid values: 3600 (hour) and 86400 (day).
    // 
    // This parameter is required.
    std::shared_ptr<string> interval_ = nullptr;
    // This parameter does not take effect. By default, the usage data of all regions is returned.
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. The value is a 10-digit timestamp.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
