// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASECLUSTERRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASECLUSTERRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsAvgLoad.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsDailyReadRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsDailyWriteRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsMemHeap.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsNormalAvgLoad.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsRegionBalance.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsRegionCount.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsRegionServerCount.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsStoreFileCount.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsTableCount.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsTotalDataSize.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsTotalReadRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsTotalRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseClusterResponseBodyDataMetricsTotalWriteRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseClusterResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseClusterResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(AvgLoad, avgLoad_);
      DARABONBA_PTR_TO_JSON(DailyReadRequest, dailyReadRequest_);
      DARABONBA_PTR_TO_JSON(DailyWriteRequest, dailyWriteRequest_);
      DARABONBA_PTR_TO_JSON(MemHeap, memHeap_);
      DARABONBA_PTR_TO_JSON(NormalAvgLoad, normalAvgLoad_);
      DARABONBA_PTR_TO_JSON(RegionBalance, regionBalance_);
      DARABONBA_PTR_TO_JSON(RegionCount, regionCount_);
      DARABONBA_PTR_TO_JSON(RegionServerCount, regionServerCount_);
      DARABONBA_PTR_TO_JSON(StoreFileCount, storeFileCount_);
      DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
      DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
      DARABONBA_PTR_TO_JSON(TotalReadRequest, totalReadRequest_);
      DARABONBA_PTR_TO_JSON(TotalRequest, totalRequest_);
      DARABONBA_PTR_TO_JSON(TotalWriteRequest, totalWriteRequest_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseClusterResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgLoad, avgLoad_);
      DARABONBA_PTR_FROM_JSON(DailyReadRequest, dailyReadRequest_);
      DARABONBA_PTR_FROM_JSON(DailyWriteRequest, dailyWriteRequest_);
      DARABONBA_PTR_FROM_JSON(MemHeap, memHeap_);
      DARABONBA_PTR_FROM_JSON(NormalAvgLoad, normalAvgLoad_);
      DARABONBA_PTR_FROM_JSON(RegionBalance, regionBalance_);
      DARABONBA_PTR_FROM_JSON(RegionCount, regionCount_);
      DARABONBA_PTR_FROM_JSON(RegionServerCount, regionServerCount_);
      DARABONBA_PTR_FROM_JSON(StoreFileCount, storeFileCount_);
      DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
      DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
      DARABONBA_PTR_FROM_JSON(TotalReadRequest, totalReadRequest_);
      DARABONBA_PTR_FROM_JSON(TotalRequest, totalRequest_);
      DARABONBA_PTR_FROM_JSON(TotalWriteRequest, totalWriteRequest_);
    };
    GetDoctorHBaseClusterResponseBodyDataMetrics() = default ;
    GetDoctorHBaseClusterResponseBodyDataMetrics(const GetDoctorHBaseClusterResponseBodyDataMetrics &) = default ;
    GetDoctorHBaseClusterResponseBodyDataMetrics(GetDoctorHBaseClusterResponseBodyDataMetrics &&) = default ;
    GetDoctorHBaseClusterResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseClusterResponseBodyDataMetrics() = default ;
    GetDoctorHBaseClusterResponseBodyDataMetrics& operator=(const GetDoctorHBaseClusterResponseBodyDataMetrics &) = default ;
    GetDoctorHBaseClusterResponseBodyDataMetrics& operator=(GetDoctorHBaseClusterResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgLoad_ == nullptr
        && return this->dailyReadRequest_ == nullptr && return this->dailyWriteRequest_ == nullptr && return this->memHeap_ == nullptr && return this->normalAvgLoad_ == nullptr && return this->regionBalance_ == nullptr
        && return this->regionCount_ == nullptr && return this->regionServerCount_ == nullptr && return this->storeFileCount_ == nullptr && return this->tableCount_ == nullptr && return this->totalDataSize_ == nullptr
        && return this->totalReadRequest_ == nullptr && return this->totalRequest_ == nullptr && return this->totalWriteRequest_ == nullptr; };
    // avgLoad Field Functions 
    bool hasAvgLoad() const { return this->avgLoad_ != nullptr;};
    void deleteAvgLoad() { this->avgLoad_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsAvgLoad & avgLoad() const { DARABONBA_PTR_GET_CONST(avgLoad_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsAvgLoad) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsAvgLoad avgLoad() { DARABONBA_PTR_GET(avgLoad_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsAvgLoad) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setAvgLoad(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsAvgLoad & avgLoad) { DARABONBA_PTR_SET_VALUE(avgLoad_, avgLoad) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setAvgLoad(Models::GetDoctorHBaseClusterResponseBodyDataMetricsAvgLoad && avgLoad) { DARABONBA_PTR_SET_RVALUE(avgLoad_, avgLoad) };


    // dailyReadRequest Field Functions 
    bool hasDailyReadRequest() const { return this->dailyReadRequest_ != nullptr;};
    void deleteDailyReadRequest() { this->dailyReadRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyReadRequest & dailyReadRequest() const { DARABONBA_PTR_GET_CONST(dailyReadRequest_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyReadRequest) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyReadRequest dailyReadRequest() { DARABONBA_PTR_GET(dailyReadRequest_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyReadRequest) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setDailyReadRequest(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyReadRequest & dailyReadRequest) { DARABONBA_PTR_SET_VALUE(dailyReadRequest_, dailyReadRequest) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setDailyReadRequest(Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyReadRequest && dailyReadRequest) { DARABONBA_PTR_SET_RVALUE(dailyReadRequest_, dailyReadRequest) };


    // dailyWriteRequest Field Functions 
    bool hasDailyWriteRequest() const { return this->dailyWriteRequest_ != nullptr;};
    void deleteDailyWriteRequest() { this->dailyWriteRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyWriteRequest & dailyWriteRequest() const { DARABONBA_PTR_GET_CONST(dailyWriteRequest_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyWriteRequest) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyWriteRequest dailyWriteRequest() { DARABONBA_PTR_GET(dailyWriteRequest_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyWriteRequest) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setDailyWriteRequest(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyWriteRequest & dailyWriteRequest) { DARABONBA_PTR_SET_VALUE(dailyWriteRequest_, dailyWriteRequest) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setDailyWriteRequest(Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyWriteRequest && dailyWriteRequest) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequest_, dailyWriteRequest) };


    // memHeap Field Functions 
    bool hasMemHeap() const { return this->memHeap_ != nullptr;};
    void deleteMemHeap() { this->memHeap_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsMemHeap & memHeap() const { DARABONBA_PTR_GET_CONST(memHeap_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsMemHeap) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsMemHeap memHeap() { DARABONBA_PTR_GET(memHeap_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsMemHeap) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setMemHeap(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsMemHeap & memHeap) { DARABONBA_PTR_SET_VALUE(memHeap_, memHeap) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setMemHeap(Models::GetDoctorHBaseClusterResponseBodyDataMetricsMemHeap && memHeap) { DARABONBA_PTR_SET_RVALUE(memHeap_, memHeap) };


    // normalAvgLoad Field Functions 
    bool hasNormalAvgLoad() const { return this->normalAvgLoad_ != nullptr;};
    void deleteNormalAvgLoad() { this->normalAvgLoad_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsNormalAvgLoad & normalAvgLoad() const { DARABONBA_PTR_GET_CONST(normalAvgLoad_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsNormalAvgLoad) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsNormalAvgLoad normalAvgLoad() { DARABONBA_PTR_GET(normalAvgLoad_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsNormalAvgLoad) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setNormalAvgLoad(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsNormalAvgLoad & normalAvgLoad) { DARABONBA_PTR_SET_VALUE(normalAvgLoad_, normalAvgLoad) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setNormalAvgLoad(Models::GetDoctorHBaseClusterResponseBodyDataMetricsNormalAvgLoad && normalAvgLoad) { DARABONBA_PTR_SET_RVALUE(normalAvgLoad_, normalAvgLoad) };


    // regionBalance Field Functions 
    bool hasRegionBalance() const { return this->regionBalance_ != nullptr;};
    void deleteRegionBalance() { this->regionBalance_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionBalance & regionBalance() const { DARABONBA_PTR_GET_CONST(regionBalance_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionBalance) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionBalance regionBalance() { DARABONBA_PTR_GET(regionBalance_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionBalance) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setRegionBalance(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionBalance & regionBalance) { DARABONBA_PTR_SET_VALUE(regionBalance_, regionBalance) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setRegionBalance(Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionBalance && regionBalance) { DARABONBA_PTR_SET_RVALUE(regionBalance_, regionBalance) };


    // regionCount Field Functions 
    bool hasRegionCount() const { return this->regionCount_ != nullptr;};
    void deleteRegionCount() { this->regionCount_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionCount & regionCount() const { DARABONBA_PTR_GET_CONST(regionCount_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionCount) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionCount regionCount() { DARABONBA_PTR_GET(regionCount_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionCount) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setRegionCount(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionCount & regionCount) { DARABONBA_PTR_SET_VALUE(regionCount_, regionCount) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setRegionCount(Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionCount && regionCount) { DARABONBA_PTR_SET_RVALUE(regionCount_, regionCount) };


    // regionServerCount Field Functions 
    bool hasRegionServerCount() const { return this->regionServerCount_ != nullptr;};
    void deleteRegionServerCount() { this->regionServerCount_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionServerCount & regionServerCount() const { DARABONBA_PTR_GET_CONST(regionServerCount_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionServerCount) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionServerCount regionServerCount() { DARABONBA_PTR_GET(regionServerCount_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionServerCount) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setRegionServerCount(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionServerCount & regionServerCount) { DARABONBA_PTR_SET_VALUE(regionServerCount_, regionServerCount) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setRegionServerCount(Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionServerCount && regionServerCount) { DARABONBA_PTR_SET_RVALUE(regionServerCount_, regionServerCount) };


    // storeFileCount Field Functions 
    bool hasStoreFileCount() const { return this->storeFileCount_ != nullptr;};
    void deleteStoreFileCount() { this->storeFileCount_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsStoreFileCount & storeFileCount() const { DARABONBA_PTR_GET_CONST(storeFileCount_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsStoreFileCount) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsStoreFileCount storeFileCount() { DARABONBA_PTR_GET(storeFileCount_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsStoreFileCount) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setStoreFileCount(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsStoreFileCount & storeFileCount) { DARABONBA_PTR_SET_VALUE(storeFileCount_, storeFileCount) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setStoreFileCount(Models::GetDoctorHBaseClusterResponseBodyDataMetricsStoreFileCount && storeFileCount) { DARABONBA_PTR_SET_RVALUE(storeFileCount_, storeFileCount) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsTableCount & tableCount() const { DARABONBA_PTR_GET_CONST(tableCount_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsTableCount) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsTableCount tableCount() { DARABONBA_PTR_GET(tableCount_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsTableCount) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setTableCount(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsTableCount & tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setTableCount(Models::GetDoctorHBaseClusterResponseBodyDataMetricsTableCount && tableCount) { DARABONBA_PTR_SET_RVALUE(tableCount_, tableCount) };


    // totalDataSize Field Functions 
    bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
    void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalDataSize & totalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalDataSize) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalDataSize totalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalDataSize) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setTotalDataSize(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setTotalDataSize(Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


    // totalReadRequest Field Functions 
    bool hasTotalReadRequest() const { return this->totalReadRequest_ != nullptr;};
    void deleteTotalReadRequest() { this->totalReadRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalReadRequest & totalReadRequest() const { DARABONBA_PTR_GET_CONST(totalReadRequest_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalReadRequest) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalReadRequest totalReadRequest() { DARABONBA_PTR_GET(totalReadRequest_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalReadRequest) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setTotalReadRequest(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalReadRequest & totalReadRequest) { DARABONBA_PTR_SET_VALUE(totalReadRequest_, totalReadRequest) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setTotalReadRequest(Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalReadRequest && totalReadRequest) { DARABONBA_PTR_SET_RVALUE(totalReadRequest_, totalReadRequest) };


    // totalRequest Field Functions 
    bool hasTotalRequest() const { return this->totalRequest_ != nullptr;};
    void deleteTotalRequest() { this->totalRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalRequest & totalRequest() const { DARABONBA_PTR_GET_CONST(totalRequest_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalRequest) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalRequest totalRequest() { DARABONBA_PTR_GET(totalRequest_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalRequest) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setTotalRequest(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalRequest & totalRequest) { DARABONBA_PTR_SET_VALUE(totalRequest_, totalRequest) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setTotalRequest(Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalRequest && totalRequest) { DARABONBA_PTR_SET_RVALUE(totalRequest_, totalRequest) };


    // totalWriteRequest Field Functions 
    bool hasTotalWriteRequest() const { return this->totalWriteRequest_ != nullptr;};
    void deleteTotalWriteRequest() { this->totalWriteRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalWriteRequest & totalWriteRequest() const { DARABONBA_PTR_GET_CONST(totalWriteRequest_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalWriteRequest) };
    inline Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalWriteRequest totalWriteRequest() { DARABONBA_PTR_GET(totalWriteRequest_, Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalWriteRequest) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setTotalWriteRequest(const Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalWriteRequest & totalWriteRequest) { DARABONBA_PTR_SET_VALUE(totalWriteRequest_, totalWriteRequest) };
    inline GetDoctorHBaseClusterResponseBodyDataMetrics& setTotalWriteRequest(Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalWriteRequest && totalWriteRequest) { DARABONBA_PTR_SET_RVALUE(totalWriteRequest_, totalWriteRequest) };


  protected:
    // The average load.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsAvgLoad> avgLoad_ = nullptr;
    // The number of read requests in a day.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyReadRequest> dailyReadRequest_ = nullptr;
    // The number of write requests in a day.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsDailyWriteRequest> dailyWriteRequest_ = nullptr;
    // The memory size.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsMemHeap> memHeap_ = nullptr;
    // The normal average load.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsNormalAvgLoad> normalAvgLoad_ = nullptr;
    // The region balance degree.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionBalance> regionBalance_ = nullptr;
    // The number of regions.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionCount> regionCount_ = nullptr;
    // The number of region servers.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsRegionServerCount> regionServerCount_ = nullptr;
    // The number of StoreFiles.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsStoreFileCount> storeFileCount_ = nullptr;
    // The number of tables.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsTableCount> tableCount_ = nullptr;
    // The size of the cluster.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalDataSize> totalDataSize_ = nullptr;
    // The total number of read requests.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalReadRequest> totalReadRequest_ = nullptr;
    // The total number of requests in the cluster.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalRequest> totalRequest_ = nullptr;
    // The total number of write requests.
    std::shared_ptr<Models::GetDoctorHBaseClusterResponseBodyDataMetricsTotalWriteRequest> totalWriteRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
