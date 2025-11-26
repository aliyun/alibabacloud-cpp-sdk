// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHBASEREGIONSERVERSRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHBASEREGIONSERVERSRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBodyDataMetricsAvgGc.hpp>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBodyDataMetricsCacheRatio.hpp>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequest.hpp>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequestDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequest.hpp>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBodyDataMetricsRegionCount.hpp>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalReadRequest.hpp>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalRequest.hpp>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalWriteRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHBaseRegionServersResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHBaseRegionServersResponseBodyDataMetrics& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDoctorHBaseRegionServersResponseBodyDataMetrics& obj) { 
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
    ListDoctorHBaseRegionServersResponseBodyDataMetrics() = default ;
    ListDoctorHBaseRegionServersResponseBodyDataMetrics(const ListDoctorHBaseRegionServersResponseBodyDataMetrics &) = default ;
    ListDoctorHBaseRegionServersResponseBodyDataMetrics(ListDoctorHBaseRegionServersResponseBodyDataMetrics &&) = default ;
    ListDoctorHBaseRegionServersResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHBaseRegionServersResponseBodyDataMetrics() = default ;
    ListDoctorHBaseRegionServersResponseBodyDataMetrics& operator=(const ListDoctorHBaseRegionServersResponseBodyDataMetrics &) = default ;
    ListDoctorHBaseRegionServersResponseBodyDataMetrics& operator=(ListDoctorHBaseRegionServersResponseBodyDataMetrics &&) = default ;
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
    inline const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsAvgGc & avgGc() const { DARABONBA_PTR_GET_CONST(avgGc_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsAvgGc) };
    inline Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsAvgGc avgGc() { DARABONBA_PTR_GET(avgGc_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsAvgGc) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setAvgGc(const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsAvgGc & avgGc) { DARABONBA_PTR_SET_VALUE(avgGc_, avgGc) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setAvgGc(Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsAvgGc && avgGc) { DARABONBA_PTR_SET_RVALUE(avgGc_, avgGc) };


    // cacheRatio Field Functions 
    bool hasCacheRatio() const { return this->cacheRatio_ != nullptr;};
    void deleteCacheRatio() { this->cacheRatio_ = nullptr;};
    inline const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsCacheRatio & cacheRatio() const { DARABONBA_PTR_GET_CONST(cacheRatio_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsCacheRatio) };
    inline Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsCacheRatio cacheRatio() { DARABONBA_PTR_GET(cacheRatio_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsCacheRatio) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setCacheRatio(const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsCacheRatio & cacheRatio) { DARABONBA_PTR_SET_VALUE(cacheRatio_, cacheRatio) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setCacheRatio(Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsCacheRatio && cacheRatio) { DARABONBA_PTR_SET_RVALUE(cacheRatio_, cacheRatio) };


    // dailyReadRequest Field Functions 
    bool hasDailyReadRequest() const { return this->dailyReadRequest_ != nullptr;};
    void deleteDailyReadRequest() { this->dailyReadRequest_ = nullptr;};
    inline const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequest & dailyReadRequest() const { DARABONBA_PTR_GET_CONST(dailyReadRequest_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequest) };
    inline Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequest dailyReadRequest() { DARABONBA_PTR_GET(dailyReadRequest_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequest) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setDailyReadRequest(const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequest & dailyReadRequest) { DARABONBA_PTR_SET_VALUE(dailyReadRequest_, dailyReadRequest) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setDailyReadRequest(Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequest && dailyReadRequest) { DARABONBA_PTR_SET_RVALUE(dailyReadRequest_, dailyReadRequest) };


    // dailyReadRequestDayGrowthRatio Field Functions 
    bool hasDailyReadRequestDayGrowthRatio() const { return this->dailyReadRequestDayGrowthRatio_ != nullptr;};
    void deleteDailyReadRequestDayGrowthRatio() { this->dailyReadRequestDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequestDayGrowthRatio & dailyReadRequestDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(dailyReadRequestDayGrowthRatio_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequestDayGrowthRatio) };
    inline Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequestDayGrowthRatio dailyReadRequestDayGrowthRatio() { DARABONBA_PTR_GET(dailyReadRequestDayGrowthRatio_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequestDayGrowthRatio) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setDailyReadRequestDayGrowthRatio(const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequestDayGrowthRatio & dailyReadRequestDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(dailyReadRequestDayGrowthRatio_, dailyReadRequestDayGrowthRatio) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setDailyReadRequestDayGrowthRatio(Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequestDayGrowthRatio && dailyReadRequestDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(dailyReadRequestDayGrowthRatio_, dailyReadRequestDayGrowthRatio) };


    // dailyWriteRequest Field Functions 
    bool hasDailyWriteRequest() const { return this->dailyWriteRequest_ != nullptr;};
    void deleteDailyWriteRequest() { this->dailyWriteRequest_ = nullptr;};
    inline const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequest & dailyWriteRequest() const { DARABONBA_PTR_GET_CONST(dailyWriteRequest_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequest) };
    inline Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequest dailyWriteRequest() { DARABONBA_PTR_GET(dailyWriteRequest_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequest) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setDailyWriteRequest(const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequest & dailyWriteRequest) { DARABONBA_PTR_SET_VALUE(dailyWriteRequest_, dailyWriteRequest) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setDailyWriteRequest(Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequest && dailyWriteRequest) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequest_, dailyWriteRequest) };


    // dailyWriteRequestDayGrowthRatio Field Functions 
    bool hasDailyWriteRequestDayGrowthRatio() const { return this->dailyWriteRequestDayGrowthRatio_ != nullptr;};
    void deleteDailyWriteRequestDayGrowthRatio() { this->dailyWriteRequestDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio & dailyWriteRequestDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(dailyWriteRequestDayGrowthRatio_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio) };
    inline Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio dailyWriteRequestDayGrowthRatio() { DARABONBA_PTR_GET(dailyWriteRequestDayGrowthRatio_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setDailyWriteRequestDayGrowthRatio(const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio & dailyWriteRequestDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(dailyWriteRequestDayGrowthRatio_, dailyWriteRequestDayGrowthRatio) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setDailyWriteRequestDayGrowthRatio(Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio && dailyWriteRequestDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequestDayGrowthRatio_, dailyWriteRequestDayGrowthRatio) };


    // regionCount Field Functions 
    bool hasRegionCount() const { return this->regionCount_ != nullptr;};
    void deleteRegionCount() { this->regionCount_ = nullptr;};
    inline const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsRegionCount & regionCount() const { DARABONBA_PTR_GET_CONST(regionCount_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsRegionCount) };
    inline Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsRegionCount regionCount() { DARABONBA_PTR_GET(regionCount_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsRegionCount) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setRegionCount(const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsRegionCount & regionCount) { DARABONBA_PTR_SET_VALUE(regionCount_, regionCount) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setRegionCount(Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsRegionCount && regionCount) { DARABONBA_PTR_SET_RVALUE(regionCount_, regionCount) };


    // totalReadRequest Field Functions 
    bool hasTotalReadRequest() const { return this->totalReadRequest_ != nullptr;};
    void deleteTotalReadRequest() { this->totalReadRequest_ = nullptr;};
    inline const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalReadRequest & totalReadRequest() const { DARABONBA_PTR_GET_CONST(totalReadRequest_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalReadRequest) };
    inline Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalReadRequest totalReadRequest() { DARABONBA_PTR_GET(totalReadRequest_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalReadRequest) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setTotalReadRequest(const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalReadRequest & totalReadRequest) { DARABONBA_PTR_SET_VALUE(totalReadRequest_, totalReadRequest) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setTotalReadRequest(Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalReadRequest && totalReadRequest) { DARABONBA_PTR_SET_RVALUE(totalReadRequest_, totalReadRequest) };


    // totalRequest Field Functions 
    bool hasTotalRequest() const { return this->totalRequest_ != nullptr;};
    void deleteTotalRequest() { this->totalRequest_ = nullptr;};
    inline const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalRequest & totalRequest() const { DARABONBA_PTR_GET_CONST(totalRequest_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalRequest) };
    inline Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalRequest totalRequest() { DARABONBA_PTR_GET(totalRequest_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalRequest) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setTotalRequest(const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalRequest & totalRequest) { DARABONBA_PTR_SET_VALUE(totalRequest_, totalRequest) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setTotalRequest(Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalRequest && totalRequest) { DARABONBA_PTR_SET_RVALUE(totalRequest_, totalRequest) };


    // totalWriteRequest Field Functions 
    bool hasTotalWriteRequest() const { return this->totalWriteRequest_ != nullptr;};
    void deleteTotalWriteRequest() { this->totalWriteRequest_ = nullptr;};
    inline const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalWriteRequest & totalWriteRequest() const { DARABONBA_PTR_GET_CONST(totalWriteRequest_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalWriteRequest) };
    inline Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalWriteRequest totalWriteRequest() { DARABONBA_PTR_GET(totalWriteRequest_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalWriteRequest) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setTotalWriteRequest(const Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalWriteRequest & totalWriteRequest) { DARABONBA_PTR_SET_VALUE(totalWriteRequest_, totalWriteRequest) };
    inline ListDoctorHBaseRegionServersResponseBodyDataMetrics& setTotalWriteRequest(Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalWriteRequest && totalWriteRequest) { DARABONBA_PTR_SET_RVALUE(totalWriteRequest_, totalWriteRequest) };


  protected:
    // The average garbage collection (GC) duration.
    std::shared_ptr<Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsAvgGc> avgGc_ = nullptr;
    // The cache hit ratio.
    std::shared_ptr<Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsCacheRatio> cacheRatio_ = nullptr;
    // The number of daily read requests.
    std::shared_ptr<Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequest> dailyReadRequest_ = nullptr;
    // The growth rate of the number of daily read requests.
    std::shared_ptr<Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyReadRequestDayGrowthRatio> dailyReadRequestDayGrowthRatio_ = nullptr;
    // The number of daily write requests.
    std::shared_ptr<Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequest> dailyWriteRequest_ = nullptr;
    // The growth rate of the number of daily write requests.
    std::shared_ptr<Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio> dailyWriteRequestDayGrowthRatio_ = nullptr;
    // The number of regions.
    std::shared_ptr<Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsRegionCount> regionCount_ = nullptr;
    // The cumulative number of read requests.
    std::shared_ptr<Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalReadRequest> totalReadRequest_ = nullptr;
    // The cumulative number of all requests.
    std::shared_ptr<Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalRequest> totalRequest_ = nullptr;
    // The cumulative number of write requests.
    std::shared_ptr<Models::ListDoctorHBaseRegionServersResponseBodyDataMetricsTotalWriteRequest> totalWriteRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
