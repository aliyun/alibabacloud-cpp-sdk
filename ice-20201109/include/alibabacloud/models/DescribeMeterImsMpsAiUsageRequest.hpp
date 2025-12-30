// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMPSAIUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMPSAIUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsMpsAiUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsMpsAiUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartTs, startTs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsMpsAiUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
    };
    DescribeMeterImsMpsAiUsageRequest() = default ;
    DescribeMeterImsMpsAiUsageRequest(const DescribeMeterImsMpsAiUsageRequest &) = default ;
    DescribeMeterImsMpsAiUsageRequest(DescribeMeterImsMpsAiUsageRequest &&) = default ;
    DescribeMeterImsMpsAiUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsMpsAiUsageRequest() = default ;
    DescribeMeterImsMpsAiUsageRequest& operator=(const DescribeMeterImsMpsAiUsageRequest &) = default ;
    DescribeMeterImsMpsAiUsageRequest& operator=(DescribeMeterImsMpsAiUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTs_ == nullptr
        && this->interval_ == nullptr && this->region_ == nullptr && this->startTs_ == nullptr; };
    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline int64_t getEndTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
    inline DescribeMeterImsMpsAiUsageRequest& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline DescribeMeterImsMpsAiUsageRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeMeterImsMpsAiUsageRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline int64_t getStartTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
    inline DescribeMeterImsMpsAiUsageRequest& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


  protected:
    // The end of the time range to query. The value is a 10-digit timestamp. The maximum query range is 31 days. The duration between StartTs and EndTs cannot exceed 31 days.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTs_ {};
    // The time granularity of the query. Valid values: 3600 (hour) and 86400 (day).
    // 
    // This parameter is required.
    shared_ptr<int64_t> interval_ {};
    // This parameter does not take effect. By default, the usage data of all regions is returned.
    shared_ptr<string> region_ {};
    // The beginning of the time range to query. The value is a 10-digit timestamp. You can query data within the last 90 days.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
