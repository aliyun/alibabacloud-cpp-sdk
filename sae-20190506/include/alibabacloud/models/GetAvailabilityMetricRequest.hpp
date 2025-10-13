// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVAILABILITYMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAVAILABILITYMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetAvailabilityMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvailabilityMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppSource, appSource_);
      DARABONBA_PTR_TO_JSON(CpuStrategy, cpuStrategy_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvailabilityMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppSource, appSource_);
      DARABONBA_PTR_FROM_JSON(CpuStrategy, cpuStrategy_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetAvailabilityMetricRequest() = default ;
    GetAvailabilityMetricRequest(const GetAvailabilityMetricRequest &) = default ;
    GetAvailabilityMetricRequest(GetAvailabilityMetricRequest &&) = default ;
    GetAvailabilityMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvailabilityMetricRequest() = default ;
    GetAvailabilityMetricRequest& operator=(const GetAvailabilityMetricRequest &) = default ;
    GetAvailabilityMetricRequest& operator=(GetAvailabilityMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appSource_ == nullptr
        && return this->cpuStrategy_ == nullptr && return this->limit_ == nullptr && return this->regionId_ == nullptr; };
    // appSource Field Functions 
    bool hasAppSource() const { return this->appSource_ != nullptr;};
    void deleteAppSource() { this->appSource_ = nullptr;};
    inline string appSource() const { DARABONBA_PTR_GET_DEFAULT(appSource_, "") };
    inline GetAvailabilityMetricRequest& setAppSource(string appSource) { DARABONBA_PTR_SET_VALUE(appSource_, appSource) };


    // cpuStrategy Field Functions 
    bool hasCpuStrategy() const { return this->cpuStrategy_ != nullptr;};
    void deleteCpuStrategy() { this->cpuStrategy_ = nullptr;};
    inline string cpuStrategy() const { DARABONBA_PTR_GET_DEFAULT(cpuStrategy_, "") };
    inline GetAvailabilityMetricRequest& setCpuStrategy(string cpuStrategy) { DARABONBA_PTR_SET_VALUE(cpuStrategy_, cpuStrategy) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline GetAvailabilityMetricRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAvailabilityMetricRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The SAE application type. Valid values:
    // 
    // *   **micro_service**
    // *   **web**
    // *   **job**
    std::shared_ptr<string> appSource_ = nullptr;
    // The CPU allocation policy. Valid values:
    // 
    // *   **request**: CPU cores are allocated only when a request is initiated.
    // *   **always**: Fixed CPU cores are always allocated.
    std::shared_ptr<string> cpuStrategy_ = nullptr;
    // The number of entries to return. Valid values: 0 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> limit_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
