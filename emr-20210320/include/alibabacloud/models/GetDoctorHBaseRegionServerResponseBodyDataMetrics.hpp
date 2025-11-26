// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONSERVERRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONSERVERRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionServerResponseBodyDataMetricsAvgGc.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionServerResponseBodyDataMetricsCacheRatio.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequestDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionServerResponseBodyDataMetricsRegionCount.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalReadRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalWriteRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseRegionServerResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseRegionServerResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(AvgGc, avgGc_);
      DARABONBA_PTR_TO_JSON(CacheRatio, cacheRatio_);
      DARABONBA_PTR_TO_JSON(DailyReadRequest, dailyReadRequest_);
      DARABONBA_PTR_TO_JSON(DailyReadRequestDayGrowthRatio, dailyReadRequestDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(DailyWriteRequest, dailyWriteRequest_);
      DARABONBA_PTR_TO_JSON(DailyWriteRequestDayGrowthRatio, dailyWriteRequestDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(RegionCount, regionCount_);
      DARABONBA_PTR_TO_JSON(TotalReadRequest, totalReadRequest_);
      DARABONBA_PTR_TO_JSON(TotalRequest, totalRequest_);
      DARABONBA_PTR_TO_JSON(TotalWriteRequest, totalWriteRequest_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseRegionServerResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgGc, avgGc_);
      DARABONBA_PTR_FROM_JSON(CacheRatio, cacheRatio_);
      DARABONBA_PTR_FROM_JSON(DailyReadRequest, dailyReadRequest_);
      DARABONBA_PTR_FROM_JSON(DailyReadRequestDayGrowthRatio, dailyReadRequestDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(DailyWriteRequest, dailyWriteRequest_);
      DARABONBA_PTR_FROM_JSON(DailyWriteRequestDayGrowthRatio, dailyWriteRequestDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(RegionCount, regionCount_);
      DARABONBA_PTR_FROM_JSON(TotalReadRequest, totalReadRequest_);
      DARABONBA_PTR_FROM_JSON(TotalRequest, totalRequest_);
      DARABONBA_PTR_FROM_JSON(TotalWriteRequest, totalWriteRequest_);
    };
    GetDoctorHBaseRegionServerResponseBodyDataMetrics() = default ;
    GetDoctorHBaseRegionServerResponseBodyDataMetrics(const GetDoctorHBaseRegionServerResponseBodyDataMetrics &) = default ;
    GetDoctorHBaseRegionServerResponseBodyDataMetrics(GetDoctorHBaseRegionServerResponseBodyDataMetrics &&) = default ;
    GetDoctorHBaseRegionServerResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseRegionServerResponseBodyDataMetrics() = default ;
    GetDoctorHBaseRegionServerResponseBodyDataMetrics& operator=(const GetDoctorHBaseRegionServerResponseBodyDataMetrics &) = default ;
    GetDoctorHBaseRegionServerResponseBodyDataMetrics& operator=(GetDoctorHBaseRegionServerResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgGc_ == nullptr
        && return this->cacheRatio_ == nullptr && return this->dailyReadRequest_ == nullptr && return this->dailyReadRequestDayGrowthRatio_ == nullptr && return this->dailyWriteRequest_ == nullptr && return this->dailyWriteRequestDayGrowthRatio_ == nullptr
        && return this->regionCount_ == nullptr && return this->totalReadRequest_ == nullptr && return this->totalRequest_ == nullptr && return this->totalWriteRequest_ == nullptr; };
    // avgGc Field Functions 
    bool hasAvgGc() const { return this->avgGc_ != nullptr;};
    void deleteAvgGc() { this->avgGc_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsAvgGc & avgGc() const { DARABONBA_PTR_GET_CONST(avgGc_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsAvgGc) };
    inline Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsAvgGc avgGc() { DARABONBA_PTR_GET(avgGc_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsAvgGc) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setAvgGc(const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsAvgGc & avgGc) { DARABONBA_PTR_SET_VALUE(avgGc_, avgGc) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setAvgGc(Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsAvgGc && avgGc) { DARABONBA_PTR_SET_RVALUE(avgGc_, avgGc) };


    // cacheRatio Field Functions 
    bool hasCacheRatio() const { return this->cacheRatio_ != nullptr;};
    void deleteCacheRatio() { this->cacheRatio_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsCacheRatio & cacheRatio() const { DARABONBA_PTR_GET_CONST(cacheRatio_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsCacheRatio) };
    inline Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsCacheRatio cacheRatio() { DARABONBA_PTR_GET(cacheRatio_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsCacheRatio) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setCacheRatio(const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsCacheRatio & cacheRatio) { DARABONBA_PTR_SET_VALUE(cacheRatio_, cacheRatio) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setCacheRatio(Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsCacheRatio && cacheRatio) { DARABONBA_PTR_SET_RVALUE(cacheRatio_, cacheRatio) };


    // dailyReadRequest Field Functions 
    bool hasDailyReadRequest() const { return this->dailyReadRequest_ != nullptr;};
    void deleteDailyReadRequest() { this->dailyReadRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequest & dailyReadRequest() const { DARABONBA_PTR_GET_CONST(dailyReadRequest_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequest) };
    inline Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequest dailyReadRequest() { DARABONBA_PTR_GET(dailyReadRequest_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequest) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setDailyReadRequest(const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequest & dailyReadRequest) { DARABONBA_PTR_SET_VALUE(dailyReadRequest_, dailyReadRequest) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setDailyReadRequest(Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequest && dailyReadRequest) { DARABONBA_PTR_SET_RVALUE(dailyReadRequest_, dailyReadRequest) };


    // dailyReadRequestDayGrowthRatio Field Functions 
    bool hasDailyReadRequestDayGrowthRatio() const { return this->dailyReadRequestDayGrowthRatio_ != nullptr;};
    void deleteDailyReadRequestDayGrowthRatio() { this->dailyReadRequestDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequestDayGrowthRatio & dailyReadRequestDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(dailyReadRequestDayGrowthRatio_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequestDayGrowthRatio) };
    inline Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequestDayGrowthRatio dailyReadRequestDayGrowthRatio() { DARABONBA_PTR_GET(dailyReadRequestDayGrowthRatio_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequestDayGrowthRatio) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setDailyReadRequestDayGrowthRatio(const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequestDayGrowthRatio & dailyReadRequestDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(dailyReadRequestDayGrowthRatio_, dailyReadRequestDayGrowthRatio) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setDailyReadRequestDayGrowthRatio(Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequestDayGrowthRatio && dailyReadRequestDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(dailyReadRequestDayGrowthRatio_, dailyReadRequestDayGrowthRatio) };


    // dailyWriteRequest Field Functions 
    bool hasDailyWriteRequest() const { return this->dailyWriteRequest_ != nullptr;};
    void deleteDailyWriteRequest() { this->dailyWriteRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequest & dailyWriteRequest() const { DARABONBA_PTR_GET_CONST(dailyWriteRequest_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequest) };
    inline Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequest dailyWriteRequest() { DARABONBA_PTR_GET(dailyWriteRequest_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequest) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setDailyWriteRequest(const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequest & dailyWriteRequest) { DARABONBA_PTR_SET_VALUE(dailyWriteRequest_, dailyWriteRequest) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setDailyWriteRequest(Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequest && dailyWriteRequest) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequest_, dailyWriteRequest) };


    // dailyWriteRequestDayGrowthRatio Field Functions 
    bool hasDailyWriteRequestDayGrowthRatio() const { return this->dailyWriteRequestDayGrowthRatio_ != nullptr;};
    void deleteDailyWriteRequestDayGrowthRatio() { this->dailyWriteRequestDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio & dailyWriteRequestDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(dailyWriteRequestDayGrowthRatio_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio) };
    inline Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio dailyWriteRequestDayGrowthRatio() { DARABONBA_PTR_GET(dailyWriteRequestDayGrowthRatio_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setDailyWriteRequestDayGrowthRatio(const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio & dailyWriteRequestDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(dailyWriteRequestDayGrowthRatio_, dailyWriteRequestDayGrowthRatio) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setDailyWriteRequestDayGrowthRatio(Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio && dailyWriteRequestDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequestDayGrowthRatio_, dailyWriteRequestDayGrowthRatio) };


    // regionCount Field Functions 
    bool hasRegionCount() const { return this->regionCount_ != nullptr;};
    void deleteRegionCount() { this->regionCount_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsRegionCount & regionCount() const { DARABONBA_PTR_GET_CONST(regionCount_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsRegionCount) };
    inline Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsRegionCount regionCount() { DARABONBA_PTR_GET(regionCount_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsRegionCount) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setRegionCount(const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsRegionCount & regionCount) { DARABONBA_PTR_SET_VALUE(regionCount_, regionCount) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setRegionCount(Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsRegionCount && regionCount) { DARABONBA_PTR_SET_RVALUE(regionCount_, regionCount) };


    // totalReadRequest Field Functions 
    bool hasTotalReadRequest() const { return this->totalReadRequest_ != nullptr;};
    void deleteTotalReadRequest() { this->totalReadRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalReadRequest & totalReadRequest() const { DARABONBA_PTR_GET_CONST(totalReadRequest_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalReadRequest) };
    inline Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalReadRequest totalReadRequest() { DARABONBA_PTR_GET(totalReadRequest_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalReadRequest) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setTotalReadRequest(const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalReadRequest & totalReadRequest) { DARABONBA_PTR_SET_VALUE(totalReadRequest_, totalReadRequest) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setTotalReadRequest(Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalReadRequest && totalReadRequest) { DARABONBA_PTR_SET_RVALUE(totalReadRequest_, totalReadRequest) };


    // totalRequest Field Functions 
    bool hasTotalRequest() const { return this->totalRequest_ != nullptr;};
    void deleteTotalRequest() { this->totalRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalRequest & totalRequest() const { DARABONBA_PTR_GET_CONST(totalRequest_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalRequest) };
    inline Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalRequest totalRequest() { DARABONBA_PTR_GET(totalRequest_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalRequest) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setTotalRequest(const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalRequest & totalRequest) { DARABONBA_PTR_SET_VALUE(totalRequest_, totalRequest) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setTotalRequest(Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalRequest && totalRequest) { DARABONBA_PTR_SET_RVALUE(totalRequest_, totalRequest) };


    // totalWriteRequest Field Functions 
    bool hasTotalWriteRequest() const { return this->totalWriteRequest_ != nullptr;};
    void deleteTotalWriteRequest() { this->totalWriteRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalWriteRequest & totalWriteRequest() const { DARABONBA_PTR_GET_CONST(totalWriteRequest_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalWriteRequest) };
    inline Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalWriteRequest totalWriteRequest() { DARABONBA_PTR_GET(totalWriteRequest_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalWriteRequest) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setTotalWriteRequest(const Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalWriteRequest & totalWriteRequest) { DARABONBA_PTR_SET_VALUE(totalWriteRequest_, totalWriteRequest) };
    inline GetDoctorHBaseRegionServerResponseBodyDataMetrics& setTotalWriteRequest(Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalWriteRequest && totalWriteRequest) { DARABONBA_PTR_SET_RVALUE(totalWriteRequest_, totalWriteRequest) };


  protected:
    // The average garbage collection (GC) duration.
    std::shared_ptr<Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsAvgGc> avgGc_ = nullptr;
    // The cache hit ratio.
    std::shared_ptr<Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsCacheRatio> cacheRatio_ = nullptr;
    // The number of daily read requests.
    std::shared_ptr<Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequest> dailyReadRequest_ = nullptr;
    // The day-to-day increment rate of the number of daily read requests.
    std::shared_ptr<Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyReadRequestDayGrowthRatio> dailyReadRequestDayGrowthRatio_ = nullptr;
    // The number of daily write requests.
    std::shared_ptr<Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequest> dailyWriteRequest_ = nullptr;
    // The day-to-day increment rate of the number of daily write requests.
    std::shared_ptr<Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio> dailyWriteRequestDayGrowthRatio_ = nullptr;
    // The number of regions.
    std::shared_ptr<Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsRegionCount> regionCount_ = nullptr;
    // The cumulative number of read requests.
    std::shared_ptr<Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalReadRequest> totalReadRequest_ = nullptr;
    // The cumulative number of total requests.
    std::shared_ptr<Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalRequest> totalRequest_ = nullptr;
    // The cumulative number of write requests.
    std::shared_ptr<Models::GetDoctorHBaseRegionServerResponseBodyDataMetricsTotalWriteRequest> totalWriteRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
