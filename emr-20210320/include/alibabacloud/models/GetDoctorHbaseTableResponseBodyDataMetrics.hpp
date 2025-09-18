// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASETABLERESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASETABLERESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsColdAccessDay.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsColdConfigDay.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsColdDataSize.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequestDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsFreezeConfigDay.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsFreezeDataSize.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsHotDataSize.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsLocality.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsReadRequestBalance.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsRegionBalance.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsRegionCount.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsRegionCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsRegionServerCount.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsRequestBalance.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCount.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsTableSize.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsTableSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsWarmConfigDay.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsWarmDataSize.hpp>
#include <alibabacloud/models/GetDoctorHBaseTableResponseBodyDataMetricsWriteRequestBalance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseTableResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseTableResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(ColdAccessDay, coldAccessDay_);
      DARABONBA_PTR_TO_JSON(ColdConfigDay, coldConfigDay_);
      DARABONBA_PTR_TO_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_TO_JSON(DailyReadRequest, dailyReadRequest_);
      DARABONBA_PTR_TO_JSON(DailyReadRequestDayGrowthRatio, dailyReadRequestDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(DailyWriteRequest, dailyWriteRequest_);
      DARABONBA_PTR_TO_JSON(DailyWriteRequestDayGrowthRatio, dailyWriteRequestDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(FreezeConfigDay, freezeConfigDay_);
      DARABONBA_PTR_TO_JSON(FreezeDataSize, freezeDataSize_);
      DARABONBA_PTR_TO_JSON(HotDataSize, hotDataSize_);
      DARABONBA_PTR_TO_JSON(Locality, locality_);
      DARABONBA_PTR_TO_JSON(ReadRequestBalance, readRequestBalance_);
      DARABONBA_PTR_TO_JSON(RegionBalance, regionBalance_);
      DARABONBA_PTR_TO_JSON(RegionCount, regionCount_);
      DARABONBA_PTR_TO_JSON(RegionCountDayGrowthRatio, regionCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(RegionServerCount, regionServerCount_);
      DARABONBA_PTR_TO_JSON(RequestBalance, requestBalance_);
      DARABONBA_PTR_TO_JSON(StoreFileCount, storeFileCount_);
      DARABONBA_PTR_TO_JSON(StoreFileCountDayGrowthRatio, storeFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(TableSize, tableSize_);
      DARABONBA_PTR_TO_JSON(TableSizeDayGrowthRatio, tableSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(WarmConfigDay, warmConfigDay_);
      DARABONBA_PTR_TO_JSON(WarmDataSize, warmDataSize_);
      DARABONBA_PTR_TO_JSON(WriteRequestBalance, writeRequestBalance_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseTableResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(ColdAccessDay, coldAccessDay_);
      DARABONBA_PTR_FROM_JSON(ColdConfigDay, coldConfigDay_);
      DARABONBA_PTR_FROM_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_FROM_JSON(DailyReadRequest, dailyReadRequest_);
      DARABONBA_PTR_FROM_JSON(DailyReadRequestDayGrowthRatio, dailyReadRequestDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(DailyWriteRequest, dailyWriteRequest_);
      DARABONBA_PTR_FROM_JSON(DailyWriteRequestDayGrowthRatio, dailyWriteRequestDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(FreezeConfigDay, freezeConfigDay_);
      DARABONBA_PTR_FROM_JSON(FreezeDataSize, freezeDataSize_);
      DARABONBA_PTR_FROM_JSON(HotDataSize, hotDataSize_);
      DARABONBA_PTR_FROM_JSON(Locality, locality_);
      DARABONBA_PTR_FROM_JSON(ReadRequestBalance, readRequestBalance_);
      DARABONBA_PTR_FROM_JSON(RegionBalance, regionBalance_);
      DARABONBA_PTR_FROM_JSON(RegionCount, regionCount_);
      DARABONBA_PTR_FROM_JSON(RegionCountDayGrowthRatio, regionCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(RegionServerCount, regionServerCount_);
      DARABONBA_PTR_FROM_JSON(RequestBalance, requestBalance_);
      DARABONBA_PTR_FROM_JSON(StoreFileCount, storeFileCount_);
      DARABONBA_PTR_FROM_JSON(StoreFileCountDayGrowthRatio, storeFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(TableSize, tableSize_);
      DARABONBA_PTR_FROM_JSON(TableSizeDayGrowthRatio, tableSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(WarmConfigDay, warmConfigDay_);
      DARABONBA_PTR_FROM_JSON(WarmDataSize, warmDataSize_);
      DARABONBA_PTR_FROM_JSON(WriteRequestBalance, writeRequestBalance_);
    };
    GetDoctorHBaseTableResponseBodyDataMetrics() = default ;
    GetDoctorHBaseTableResponseBodyDataMetrics(const GetDoctorHBaseTableResponseBodyDataMetrics &) = default ;
    GetDoctorHBaseTableResponseBodyDataMetrics(GetDoctorHBaseTableResponseBodyDataMetrics &&) = default ;
    GetDoctorHBaseTableResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseTableResponseBodyDataMetrics() = default ;
    GetDoctorHBaseTableResponseBodyDataMetrics& operator=(const GetDoctorHBaseTableResponseBodyDataMetrics &) = default ;
    GetDoctorHBaseTableResponseBodyDataMetrics& operator=(GetDoctorHBaseTableResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coldAccessDay_ != nullptr
        && this->coldConfigDay_ != nullptr && this->coldDataSize_ != nullptr && this->dailyReadRequest_ != nullptr && this->dailyReadRequestDayGrowthRatio_ != nullptr && this->dailyWriteRequest_ != nullptr
        && this->dailyWriteRequestDayGrowthRatio_ != nullptr && this->freezeConfigDay_ != nullptr && this->freezeDataSize_ != nullptr && this->hotDataSize_ != nullptr && this->locality_ != nullptr
        && this->readRequestBalance_ != nullptr && this->regionBalance_ != nullptr && this->regionCount_ != nullptr && this->regionCountDayGrowthRatio_ != nullptr && this->regionServerCount_ != nullptr
        && this->requestBalance_ != nullptr && this->storeFileCount_ != nullptr && this->storeFileCountDayGrowthRatio_ != nullptr && this->tableSize_ != nullptr && this->tableSizeDayGrowthRatio_ != nullptr
        && this->warmConfigDay_ != nullptr && this->warmDataSize_ != nullptr && this->writeRequestBalance_ != nullptr; };
    // coldAccessDay Field Functions 
    bool hasColdAccessDay() const { return this->coldAccessDay_ != nullptr;};
    void deleteColdAccessDay() { this->coldAccessDay_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsColdAccessDay & coldAccessDay() const { DARABONBA_PTR_GET_CONST(coldAccessDay_, Models::GetDoctorHBaseTableResponseBodyDataMetricsColdAccessDay) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsColdAccessDay coldAccessDay() { DARABONBA_PTR_GET(coldAccessDay_, Models::GetDoctorHBaseTableResponseBodyDataMetricsColdAccessDay) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setColdAccessDay(const Models::GetDoctorHBaseTableResponseBodyDataMetricsColdAccessDay & coldAccessDay) { DARABONBA_PTR_SET_VALUE(coldAccessDay_, coldAccessDay) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setColdAccessDay(Models::GetDoctorHBaseTableResponseBodyDataMetricsColdAccessDay && coldAccessDay) { DARABONBA_PTR_SET_RVALUE(coldAccessDay_, coldAccessDay) };


    // coldConfigDay Field Functions 
    bool hasColdConfigDay() const { return this->coldConfigDay_ != nullptr;};
    void deleteColdConfigDay() { this->coldConfigDay_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsColdConfigDay & coldConfigDay() const { DARABONBA_PTR_GET_CONST(coldConfigDay_, Models::GetDoctorHBaseTableResponseBodyDataMetricsColdConfigDay) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsColdConfigDay coldConfigDay() { DARABONBA_PTR_GET(coldConfigDay_, Models::GetDoctorHBaseTableResponseBodyDataMetricsColdConfigDay) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setColdConfigDay(const Models::GetDoctorHBaseTableResponseBodyDataMetricsColdConfigDay & coldConfigDay) { DARABONBA_PTR_SET_VALUE(coldConfigDay_, coldConfigDay) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setColdConfigDay(Models::GetDoctorHBaseTableResponseBodyDataMetricsColdConfigDay && coldConfigDay) { DARABONBA_PTR_SET_RVALUE(coldConfigDay_, coldConfigDay) };


    // coldDataSize Field Functions 
    bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
    void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsColdDataSize & coldDataSize() const { DARABONBA_PTR_GET_CONST(coldDataSize_, Models::GetDoctorHBaseTableResponseBodyDataMetricsColdDataSize) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsColdDataSize coldDataSize() { DARABONBA_PTR_GET(coldDataSize_, Models::GetDoctorHBaseTableResponseBodyDataMetricsColdDataSize) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setColdDataSize(const Models::GetDoctorHBaseTableResponseBodyDataMetricsColdDataSize & coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setColdDataSize(Models::GetDoctorHBaseTableResponseBodyDataMetricsColdDataSize && coldDataSize) { DARABONBA_PTR_SET_RVALUE(coldDataSize_, coldDataSize) };


    // dailyReadRequest Field Functions 
    bool hasDailyReadRequest() const { return this->dailyReadRequest_ != nullptr;};
    void deleteDailyReadRequest() { this->dailyReadRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequest & dailyReadRequest() const { DARABONBA_PTR_GET_CONST(dailyReadRequest_, Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequest) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequest dailyReadRequest() { DARABONBA_PTR_GET(dailyReadRequest_, Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequest) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setDailyReadRequest(const Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequest & dailyReadRequest) { DARABONBA_PTR_SET_VALUE(dailyReadRequest_, dailyReadRequest) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setDailyReadRequest(Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequest && dailyReadRequest) { DARABONBA_PTR_SET_RVALUE(dailyReadRequest_, dailyReadRequest) };


    // dailyReadRequestDayGrowthRatio Field Functions 
    bool hasDailyReadRequestDayGrowthRatio() const { return this->dailyReadRequestDayGrowthRatio_ != nullptr;};
    void deleteDailyReadRequestDayGrowthRatio() { this->dailyReadRequestDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequestDayGrowthRatio & dailyReadRequestDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(dailyReadRequestDayGrowthRatio_, Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequestDayGrowthRatio) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequestDayGrowthRatio dailyReadRequestDayGrowthRatio() { DARABONBA_PTR_GET(dailyReadRequestDayGrowthRatio_, Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequestDayGrowthRatio) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setDailyReadRequestDayGrowthRatio(const Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequestDayGrowthRatio & dailyReadRequestDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(dailyReadRequestDayGrowthRatio_, dailyReadRequestDayGrowthRatio) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setDailyReadRequestDayGrowthRatio(Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequestDayGrowthRatio && dailyReadRequestDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(dailyReadRequestDayGrowthRatio_, dailyReadRequestDayGrowthRatio) };


    // dailyWriteRequest Field Functions 
    bool hasDailyWriteRequest() const { return this->dailyWriteRequest_ != nullptr;};
    void deleteDailyWriteRequest() { this->dailyWriteRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequest & dailyWriteRequest() const { DARABONBA_PTR_GET_CONST(dailyWriteRequest_, Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequest) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequest dailyWriteRequest() { DARABONBA_PTR_GET(dailyWriteRequest_, Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequest) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setDailyWriteRequest(const Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequest & dailyWriteRequest) { DARABONBA_PTR_SET_VALUE(dailyWriteRequest_, dailyWriteRequest) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setDailyWriteRequest(Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequest && dailyWriteRequest) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequest_, dailyWriteRequest) };


    // dailyWriteRequestDayGrowthRatio Field Functions 
    bool hasDailyWriteRequestDayGrowthRatio() const { return this->dailyWriteRequestDayGrowthRatio_ != nullptr;};
    void deleteDailyWriteRequestDayGrowthRatio() { this->dailyWriteRequestDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio & dailyWriteRequestDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(dailyWriteRequestDayGrowthRatio_, Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio dailyWriteRequestDayGrowthRatio() { DARABONBA_PTR_GET(dailyWriteRequestDayGrowthRatio_, Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setDailyWriteRequestDayGrowthRatio(const Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio & dailyWriteRequestDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(dailyWriteRequestDayGrowthRatio_, dailyWriteRequestDayGrowthRatio) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setDailyWriteRequestDayGrowthRatio(Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio && dailyWriteRequestDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequestDayGrowthRatio_, dailyWriteRequestDayGrowthRatio) };


    // freezeConfigDay Field Functions 
    bool hasFreezeConfigDay() const { return this->freezeConfigDay_ != nullptr;};
    void deleteFreezeConfigDay() { this->freezeConfigDay_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeConfigDay & freezeConfigDay() const { DARABONBA_PTR_GET_CONST(freezeConfigDay_, Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeConfigDay) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeConfigDay freezeConfigDay() { DARABONBA_PTR_GET(freezeConfigDay_, Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeConfigDay) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setFreezeConfigDay(const Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeConfigDay & freezeConfigDay) { DARABONBA_PTR_SET_VALUE(freezeConfigDay_, freezeConfigDay) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setFreezeConfigDay(Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeConfigDay && freezeConfigDay) { DARABONBA_PTR_SET_RVALUE(freezeConfigDay_, freezeConfigDay) };


    // freezeDataSize Field Functions 
    bool hasFreezeDataSize() const { return this->freezeDataSize_ != nullptr;};
    void deleteFreezeDataSize() { this->freezeDataSize_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeDataSize & freezeDataSize() const { DARABONBA_PTR_GET_CONST(freezeDataSize_, Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeDataSize) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeDataSize freezeDataSize() { DARABONBA_PTR_GET(freezeDataSize_, Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeDataSize) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setFreezeDataSize(const Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeDataSize & freezeDataSize) { DARABONBA_PTR_SET_VALUE(freezeDataSize_, freezeDataSize) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setFreezeDataSize(Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeDataSize && freezeDataSize) { DARABONBA_PTR_SET_RVALUE(freezeDataSize_, freezeDataSize) };


    // hotDataSize Field Functions 
    bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
    void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsHotDataSize & hotDataSize() const { DARABONBA_PTR_GET_CONST(hotDataSize_, Models::GetDoctorHBaseTableResponseBodyDataMetricsHotDataSize) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsHotDataSize hotDataSize() { DARABONBA_PTR_GET(hotDataSize_, Models::GetDoctorHBaseTableResponseBodyDataMetricsHotDataSize) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setHotDataSize(const Models::GetDoctorHBaseTableResponseBodyDataMetricsHotDataSize & hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setHotDataSize(Models::GetDoctorHBaseTableResponseBodyDataMetricsHotDataSize && hotDataSize) { DARABONBA_PTR_SET_RVALUE(hotDataSize_, hotDataSize) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsLocality & locality() const { DARABONBA_PTR_GET_CONST(locality_, Models::GetDoctorHBaseTableResponseBodyDataMetricsLocality) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsLocality locality() { DARABONBA_PTR_GET(locality_, Models::GetDoctorHBaseTableResponseBodyDataMetricsLocality) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setLocality(const Models::GetDoctorHBaseTableResponseBodyDataMetricsLocality & locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setLocality(Models::GetDoctorHBaseTableResponseBodyDataMetricsLocality && locality) { DARABONBA_PTR_SET_RVALUE(locality_, locality) };


    // readRequestBalance Field Functions 
    bool hasReadRequestBalance() const { return this->readRequestBalance_ != nullptr;};
    void deleteReadRequestBalance() { this->readRequestBalance_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsReadRequestBalance & readRequestBalance() const { DARABONBA_PTR_GET_CONST(readRequestBalance_, Models::GetDoctorHBaseTableResponseBodyDataMetricsReadRequestBalance) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsReadRequestBalance readRequestBalance() { DARABONBA_PTR_GET(readRequestBalance_, Models::GetDoctorHBaseTableResponseBodyDataMetricsReadRequestBalance) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setReadRequestBalance(const Models::GetDoctorHBaseTableResponseBodyDataMetricsReadRequestBalance & readRequestBalance) { DARABONBA_PTR_SET_VALUE(readRequestBalance_, readRequestBalance) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setReadRequestBalance(Models::GetDoctorHBaseTableResponseBodyDataMetricsReadRequestBalance && readRequestBalance) { DARABONBA_PTR_SET_RVALUE(readRequestBalance_, readRequestBalance) };


    // regionBalance Field Functions 
    bool hasRegionBalance() const { return this->regionBalance_ != nullptr;};
    void deleteRegionBalance() { this->regionBalance_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionBalance & regionBalance() const { DARABONBA_PTR_GET_CONST(regionBalance_, Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionBalance) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionBalance regionBalance() { DARABONBA_PTR_GET(regionBalance_, Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionBalance) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setRegionBalance(const Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionBalance & regionBalance) { DARABONBA_PTR_SET_VALUE(regionBalance_, regionBalance) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setRegionBalance(Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionBalance && regionBalance) { DARABONBA_PTR_SET_RVALUE(regionBalance_, regionBalance) };


    // regionCount Field Functions 
    bool hasRegionCount() const { return this->regionCount_ != nullptr;};
    void deleteRegionCount() { this->regionCount_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCount & regionCount() const { DARABONBA_PTR_GET_CONST(regionCount_, Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCount) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCount regionCount() { DARABONBA_PTR_GET(regionCount_, Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCount) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setRegionCount(const Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCount & regionCount) { DARABONBA_PTR_SET_VALUE(regionCount_, regionCount) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setRegionCount(Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCount && regionCount) { DARABONBA_PTR_SET_RVALUE(regionCount_, regionCount) };


    // regionCountDayGrowthRatio Field Functions 
    bool hasRegionCountDayGrowthRatio() const { return this->regionCountDayGrowthRatio_ != nullptr;};
    void deleteRegionCountDayGrowthRatio() { this->regionCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCountDayGrowthRatio & regionCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(regionCountDayGrowthRatio_, Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCountDayGrowthRatio) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCountDayGrowthRatio regionCountDayGrowthRatio() { DARABONBA_PTR_GET(regionCountDayGrowthRatio_, Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCountDayGrowthRatio) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setRegionCountDayGrowthRatio(const Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCountDayGrowthRatio & regionCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(regionCountDayGrowthRatio_, regionCountDayGrowthRatio) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setRegionCountDayGrowthRatio(Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCountDayGrowthRatio && regionCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(regionCountDayGrowthRatio_, regionCountDayGrowthRatio) };


    // regionServerCount Field Functions 
    bool hasRegionServerCount() const { return this->regionServerCount_ != nullptr;};
    void deleteRegionServerCount() { this->regionServerCount_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionServerCount & regionServerCount() const { DARABONBA_PTR_GET_CONST(regionServerCount_, Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionServerCount) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionServerCount regionServerCount() { DARABONBA_PTR_GET(regionServerCount_, Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionServerCount) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setRegionServerCount(const Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionServerCount & regionServerCount) { DARABONBA_PTR_SET_VALUE(regionServerCount_, regionServerCount) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setRegionServerCount(Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionServerCount && regionServerCount) { DARABONBA_PTR_SET_RVALUE(regionServerCount_, regionServerCount) };


    // requestBalance Field Functions 
    bool hasRequestBalance() const { return this->requestBalance_ != nullptr;};
    void deleteRequestBalance() { this->requestBalance_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsRequestBalance & requestBalance() const { DARABONBA_PTR_GET_CONST(requestBalance_, Models::GetDoctorHBaseTableResponseBodyDataMetricsRequestBalance) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsRequestBalance requestBalance() { DARABONBA_PTR_GET(requestBalance_, Models::GetDoctorHBaseTableResponseBodyDataMetricsRequestBalance) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setRequestBalance(const Models::GetDoctorHBaseTableResponseBodyDataMetricsRequestBalance & requestBalance) { DARABONBA_PTR_SET_VALUE(requestBalance_, requestBalance) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setRequestBalance(Models::GetDoctorHBaseTableResponseBodyDataMetricsRequestBalance && requestBalance) { DARABONBA_PTR_SET_RVALUE(requestBalance_, requestBalance) };


    // storeFileCount Field Functions 
    bool hasStoreFileCount() const { return this->storeFileCount_ != nullptr;};
    void deleteStoreFileCount() { this->storeFileCount_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCount & storeFileCount() const { DARABONBA_PTR_GET_CONST(storeFileCount_, Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCount) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCount storeFileCount() { DARABONBA_PTR_GET(storeFileCount_, Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCount) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setStoreFileCount(const Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCount & storeFileCount) { DARABONBA_PTR_SET_VALUE(storeFileCount_, storeFileCount) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setStoreFileCount(Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCount && storeFileCount) { DARABONBA_PTR_SET_RVALUE(storeFileCount_, storeFileCount) };


    // storeFileCountDayGrowthRatio Field Functions 
    bool hasStoreFileCountDayGrowthRatio() const { return this->storeFileCountDayGrowthRatio_ != nullptr;};
    void deleteStoreFileCountDayGrowthRatio() { this->storeFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCountDayGrowthRatio & storeFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(storeFileCountDayGrowthRatio_, Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCountDayGrowthRatio) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCountDayGrowthRatio storeFileCountDayGrowthRatio() { DARABONBA_PTR_GET(storeFileCountDayGrowthRatio_, Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCountDayGrowthRatio) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setStoreFileCountDayGrowthRatio(const Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCountDayGrowthRatio & storeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(storeFileCountDayGrowthRatio_, storeFileCountDayGrowthRatio) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setStoreFileCountDayGrowthRatio(Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCountDayGrowthRatio && storeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(storeFileCountDayGrowthRatio_, storeFileCountDayGrowthRatio) };


    // tableSize Field Functions 
    bool hasTableSize() const { return this->tableSize_ != nullptr;};
    void deleteTableSize() { this->tableSize_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSize & tableSize() const { DARABONBA_PTR_GET_CONST(tableSize_, Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSize) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSize tableSize() { DARABONBA_PTR_GET(tableSize_, Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSize) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setTableSize(const Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSize & tableSize) { DARABONBA_PTR_SET_VALUE(tableSize_, tableSize) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setTableSize(Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSize && tableSize) { DARABONBA_PTR_SET_RVALUE(tableSize_, tableSize) };


    // tableSizeDayGrowthRatio Field Functions 
    bool hasTableSizeDayGrowthRatio() const { return this->tableSizeDayGrowthRatio_ != nullptr;};
    void deleteTableSizeDayGrowthRatio() { this->tableSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSizeDayGrowthRatio & tableSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(tableSizeDayGrowthRatio_, Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSizeDayGrowthRatio) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSizeDayGrowthRatio tableSizeDayGrowthRatio() { DARABONBA_PTR_GET(tableSizeDayGrowthRatio_, Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSizeDayGrowthRatio) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setTableSizeDayGrowthRatio(const Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSizeDayGrowthRatio & tableSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(tableSizeDayGrowthRatio_, tableSizeDayGrowthRatio) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setTableSizeDayGrowthRatio(Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSizeDayGrowthRatio && tableSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(tableSizeDayGrowthRatio_, tableSizeDayGrowthRatio) };


    // warmConfigDay Field Functions 
    bool hasWarmConfigDay() const { return this->warmConfigDay_ != nullptr;};
    void deleteWarmConfigDay() { this->warmConfigDay_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmConfigDay & warmConfigDay() const { DARABONBA_PTR_GET_CONST(warmConfigDay_, Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmConfigDay) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmConfigDay warmConfigDay() { DARABONBA_PTR_GET(warmConfigDay_, Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmConfigDay) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setWarmConfigDay(const Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmConfigDay & warmConfigDay) { DARABONBA_PTR_SET_VALUE(warmConfigDay_, warmConfigDay) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setWarmConfigDay(Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmConfigDay && warmConfigDay) { DARABONBA_PTR_SET_RVALUE(warmConfigDay_, warmConfigDay) };


    // warmDataSize Field Functions 
    bool hasWarmDataSize() const { return this->warmDataSize_ != nullptr;};
    void deleteWarmDataSize() { this->warmDataSize_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmDataSize & warmDataSize() const { DARABONBA_PTR_GET_CONST(warmDataSize_, Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmDataSize) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmDataSize warmDataSize() { DARABONBA_PTR_GET(warmDataSize_, Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmDataSize) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setWarmDataSize(const Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmDataSize & warmDataSize) { DARABONBA_PTR_SET_VALUE(warmDataSize_, warmDataSize) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setWarmDataSize(Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmDataSize && warmDataSize) { DARABONBA_PTR_SET_RVALUE(warmDataSize_, warmDataSize) };


    // writeRequestBalance Field Functions 
    bool hasWriteRequestBalance() const { return this->writeRequestBalance_ != nullptr;};
    void deleteWriteRequestBalance() { this->writeRequestBalance_ = nullptr;};
    inline const Models::GetDoctorHBaseTableResponseBodyDataMetricsWriteRequestBalance & writeRequestBalance() const { DARABONBA_PTR_GET_CONST(writeRequestBalance_, Models::GetDoctorHBaseTableResponseBodyDataMetricsWriteRequestBalance) };
    inline Models::GetDoctorHBaseTableResponseBodyDataMetricsWriteRequestBalance writeRequestBalance() { DARABONBA_PTR_GET(writeRequestBalance_, Models::GetDoctorHBaseTableResponseBodyDataMetricsWriteRequestBalance) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setWriteRequestBalance(const Models::GetDoctorHBaseTableResponseBodyDataMetricsWriteRequestBalance & writeRequestBalance) { DARABONBA_PTR_SET_VALUE(writeRequestBalance_, writeRequestBalance) };
    inline GetDoctorHBaseTableResponseBodyDataMetrics& setWriteRequestBalance(Models::GetDoctorHBaseTableResponseBodyDataMetricsWriteRequestBalance && writeRequestBalance) { DARABONBA_PTR_SET_RVALUE(writeRequestBalance_, writeRequestBalance) };


  protected:
    // Number of days the table has not been accessed.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsColdAccessDay> coldAccessDay_ = nullptr;
    // Cold data access days configuration.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsColdConfigDay> coldConfigDay_ = nullptr;
    // Cold data size.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsColdDataSize> coldDataSize_ = nullptr;
    // Number of read requests per day.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequest> dailyReadRequest_ = nullptr;
    // Daily growth ratio of daily read requests.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyReadRequestDayGrowthRatio> dailyReadRequestDayGrowthRatio_ = nullptr;
    // Number of write requests per day.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequest> dailyWriteRequest_ = nullptr;
    // Daily write request growth ratio.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio> dailyWriteRequestDayGrowthRatio_ = nullptr;
    // Configuration for the number of days cold data is accessed.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeConfigDay> freezeConfigDay_ = nullptr;
    // Frozen data size.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsFreezeDataSize> freezeDataSize_ = nullptr;
    // Hot data size.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsHotDataSize> hotDataSize_ = nullptr;
    // Locality rate.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsLocality> locality_ = nullptr;
    // Read request balance.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsReadRequestBalance> readRequestBalance_ = nullptr;
    // Region balance.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionBalance> regionBalance_ = nullptr;
    // Number of regions.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCount> regionCount_ = nullptr;
    // Daily incremental ratio of regions
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionCountDayGrowthRatio> regionCountDayGrowthRatio_ = nullptr;
    // Number of RegionServers.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsRegionServerCount> regionServerCount_ = nullptr;
    // Request balance.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsRequestBalance> requestBalance_ = nullptr;
    // Number of store files.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCount> storeFileCount_ = nullptr;
    // Daily growth ratio of store file count.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsStoreFileCountDayGrowthRatio> storeFileCountDayGrowthRatio_ = nullptr;
    // Table size.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSize> tableSize_ = nullptr;
    // Daily growth ratio of table size.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsTableSizeDayGrowthRatio> tableSizeDayGrowthRatio_ = nullptr;
    // Warm data access days configuration.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmConfigDay> warmConfigDay_ = nullptr;
    // Warm data size.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsWarmDataSize> warmDataSize_ = nullptr;
    // Write request balance.
    std::shared_ptr<Models::GetDoctorHBaseTableResponseBodyDataMetricsWriteRequestBalance> writeRequestBalance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
