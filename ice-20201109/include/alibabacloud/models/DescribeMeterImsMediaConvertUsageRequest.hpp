// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMEDIACONVERTUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMEDIACONVERTUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsMediaConvertUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsMediaConvertUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartTs, startTs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsMediaConvertUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
    };
    DescribeMeterImsMediaConvertUsageRequest() = default ;
    DescribeMeterImsMediaConvertUsageRequest(const DescribeMeterImsMediaConvertUsageRequest &) = default ;
    DescribeMeterImsMediaConvertUsageRequest(DescribeMeterImsMediaConvertUsageRequest &&) = default ;
    DescribeMeterImsMediaConvertUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsMediaConvertUsageRequest() = default ;
    DescribeMeterImsMediaConvertUsageRequest& operator=(const DescribeMeterImsMediaConvertUsageRequest &) = default ;
    DescribeMeterImsMediaConvertUsageRequest& operator=(DescribeMeterImsMediaConvertUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTs_ != nullptr
        && this->interval_ != nullptr && this->region_ != nullptr && this->startTs_ != nullptr; };
    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline int64_t endTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
    inline DescribeMeterImsMediaConvertUsageRequest& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline DescribeMeterImsMediaConvertUsageRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeMeterImsMediaConvertUsageRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline int64_t startTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
    inline DescribeMeterImsMediaConvertUsageRequest& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


  protected:
    // The end of the time range to query. The value is a 10-digit timestamp. The maximum query range is 31 days. The duration between StartTs and EndTs cannot exceed 31 days.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTs_ = nullptr;
    // The time granularity of the query. Valid values: 3600 (hour) and 86400 (day).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> interval_ = nullptr;
    // This parameter does not take effect. By default, the usage data of all regions is returned.
    std::shared_ptr<string> region_ = nullptr;
    // The beginning of the time range to query. The value is a 10-digit timestamp. You can query data within the last 90 days.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
