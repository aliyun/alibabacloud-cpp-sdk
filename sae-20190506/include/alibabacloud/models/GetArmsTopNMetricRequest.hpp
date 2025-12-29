// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARMSTOPNMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETARMSTOPNMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetArmsTopNMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArmsTopNMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppSource, appSource_);
      DARABONBA_PTR_TO_JSON(CpuStrategy, cpuStrategy_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetArmsTopNMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppSource, appSource_);
      DARABONBA_PTR_FROM_JSON(CpuStrategy, cpuStrategy_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetArmsTopNMetricRequest() = default ;
    GetArmsTopNMetricRequest(const GetArmsTopNMetricRequest &) = default ;
    GetArmsTopNMetricRequest(GetArmsTopNMetricRequest &&) = default ;
    GetArmsTopNMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArmsTopNMetricRequest() = default ;
    GetArmsTopNMetricRequest& operator=(const GetArmsTopNMetricRequest &) = default ;
    GetArmsTopNMetricRequest& operator=(GetArmsTopNMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appSource_ == nullptr
        && this->cpuStrategy_ == nullptr && this->endTime_ == nullptr && this->limit_ == nullptr && this->orderBy_ == nullptr && this->regionId_ == nullptr
        && this->startTime_ == nullptr; };
    // appSource Field Functions 
    bool hasAppSource() const { return this->appSource_ != nullptr;};
    void deleteAppSource() { this->appSource_ = nullptr;};
    inline string getAppSource() const { DARABONBA_PTR_GET_DEFAULT(appSource_, "") };
    inline GetArmsTopNMetricRequest& setAppSource(string appSource) { DARABONBA_PTR_SET_VALUE(appSource_, appSource) };


    // cpuStrategy Field Functions 
    bool hasCpuStrategy() const { return this->cpuStrategy_ != nullptr;};
    void deleteCpuStrategy() { this->cpuStrategy_ = nullptr;};
    inline string getCpuStrategy() const { DARABONBA_PTR_GET_DEFAULT(cpuStrategy_, "") };
    inline GetArmsTopNMetricRequest& setCpuStrategy(string cpuStrategy) { DARABONBA_PTR_SET_VALUE(cpuStrategy_, cpuStrategy) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetArmsTopNMetricRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline GetArmsTopNMetricRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetArmsTopNMetricRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetArmsTopNMetricRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetArmsTopNMetricRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The CPU allocation policy. Valid values:
    // 
    // *   **request**: CPU cores are allocated only when a request is initiated.
    // *   **always**: Fixed CPU cores are always allocated.
    shared_ptr<string> appSource_ {};
    // The additional information that is returned. The following limits are imposed on the ID:
    // 
    // *   success: If the call is successful, **success** is returned.
    // *   An error code: If the call fails, an error code is returned.
    shared_ptr<string> cpuStrategy_ {};
    // The SAE application type. Valid values:
    // 
    // *   **micro_service**
    // *   **web**
    // *   **job**
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The beginning of the time range to query.
    // 
    // This parameter is required.
    shared_ptr<int64_t> limit_ {};
    // The number of entries to return. Valid values: 0 to 100.
    // 
    // This parameter is required.
    shared_ptr<string> orderBy_ {};
    // The field based on which you want to sort the returned entries.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The end of the time range to query.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
