// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHBASETABLESRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHBASETABLESRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsColdAccessDay.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsColdConfigDay.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsColdDataSize.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequest.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequestDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequest.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsFreezeConfigDay.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsFreezeDataSize.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsHotDataSize.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsLocality.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsReadRequestBalance.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsRegionBalance.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsRegionCount.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsRegionCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsRegionServerCount.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsRequestBalance.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCount.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsTableSize.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsTableSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsWarmConfigDay.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsWarmDataSize.hpp>
#include <alibabacloud/models/ListDoctorHBaseTablesResponseBodyDataMetricsWriteRequestBalance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHBaseTablesResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHBaseTablesResponseBodyDataMetrics& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDoctorHBaseTablesResponseBodyDataMetrics& obj) { 
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
    ListDoctorHBaseTablesResponseBodyDataMetrics() = default ;
    ListDoctorHBaseTablesResponseBodyDataMetrics(const ListDoctorHBaseTablesResponseBodyDataMetrics &) = default ;
    ListDoctorHBaseTablesResponseBodyDataMetrics(ListDoctorHBaseTablesResponseBodyDataMetrics &&) = default ;
    ListDoctorHBaseTablesResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHBaseTablesResponseBodyDataMetrics() = default ;
    ListDoctorHBaseTablesResponseBodyDataMetrics& operator=(const ListDoctorHBaseTablesResponseBodyDataMetrics &) = default ;
    ListDoctorHBaseTablesResponseBodyDataMetrics& operator=(ListDoctorHBaseTablesResponseBodyDataMetrics &&) = default ;
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
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdAccessDay & coldAccessDay() const { DARABONBA_PTR_GET_CONST(coldAccessDay_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdAccessDay) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdAccessDay coldAccessDay() { DARABONBA_PTR_GET(coldAccessDay_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdAccessDay) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setColdAccessDay(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdAccessDay & coldAccessDay) { DARABONBA_PTR_SET_VALUE(coldAccessDay_, coldAccessDay) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setColdAccessDay(Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdAccessDay && coldAccessDay) { DARABONBA_PTR_SET_RVALUE(coldAccessDay_, coldAccessDay) };


    // coldConfigDay Field Functions 
    bool hasColdConfigDay() const { return this->coldConfigDay_ != nullptr;};
    void deleteColdConfigDay() { this->coldConfigDay_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdConfigDay & coldConfigDay() const { DARABONBA_PTR_GET_CONST(coldConfigDay_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdConfigDay) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdConfigDay coldConfigDay() { DARABONBA_PTR_GET(coldConfigDay_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdConfigDay) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setColdConfigDay(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdConfigDay & coldConfigDay) { DARABONBA_PTR_SET_VALUE(coldConfigDay_, coldConfigDay) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setColdConfigDay(Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdConfigDay && coldConfigDay) { DARABONBA_PTR_SET_RVALUE(coldConfigDay_, coldConfigDay) };


    // coldDataSize Field Functions 
    bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
    void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdDataSize & coldDataSize() const { DARABONBA_PTR_GET_CONST(coldDataSize_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdDataSize) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdDataSize coldDataSize() { DARABONBA_PTR_GET(coldDataSize_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdDataSize) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setColdDataSize(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdDataSize & coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setColdDataSize(Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdDataSize && coldDataSize) { DARABONBA_PTR_SET_RVALUE(coldDataSize_, coldDataSize) };


    // dailyReadRequest Field Functions 
    bool hasDailyReadRequest() const { return this->dailyReadRequest_ != nullptr;};
    void deleteDailyReadRequest() { this->dailyReadRequest_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequest & dailyReadRequest() const { DARABONBA_PTR_GET_CONST(dailyReadRequest_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequest) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequest dailyReadRequest() { DARABONBA_PTR_GET(dailyReadRequest_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequest) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setDailyReadRequest(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequest & dailyReadRequest) { DARABONBA_PTR_SET_VALUE(dailyReadRequest_, dailyReadRequest) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setDailyReadRequest(Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequest && dailyReadRequest) { DARABONBA_PTR_SET_RVALUE(dailyReadRequest_, dailyReadRequest) };


    // dailyReadRequestDayGrowthRatio Field Functions 
    bool hasDailyReadRequestDayGrowthRatio() const { return this->dailyReadRequestDayGrowthRatio_ != nullptr;};
    void deleteDailyReadRequestDayGrowthRatio() { this->dailyReadRequestDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequestDayGrowthRatio & dailyReadRequestDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(dailyReadRequestDayGrowthRatio_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequestDayGrowthRatio) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequestDayGrowthRatio dailyReadRequestDayGrowthRatio() { DARABONBA_PTR_GET(dailyReadRequestDayGrowthRatio_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequestDayGrowthRatio) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setDailyReadRequestDayGrowthRatio(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequestDayGrowthRatio & dailyReadRequestDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(dailyReadRequestDayGrowthRatio_, dailyReadRequestDayGrowthRatio) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setDailyReadRequestDayGrowthRatio(Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequestDayGrowthRatio && dailyReadRequestDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(dailyReadRequestDayGrowthRatio_, dailyReadRequestDayGrowthRatio) };


    // dailyWriteRequest Field Functions 
    bool hasDailyWriteRequest() const { return this->dailyWriteRequest_ != nullptr;};
    void deleteDailyWriteRequest() { this->dailyWriteRequest_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequest & dailyWriteRequest() const { DARABONBA_PTR_GET_CONST(dailyWriteRequest_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequest) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequest dailyWriteRequest() { DARABONBA_PTR_GET(dailyWriteRequest_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequest) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setDailyWriteRequest(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequest & dailyWriteRequest) { DARABONBA_PTR_SET_VALUE(dailyWriteRequest_, dailyWriteRequest) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setDailyWriteRequest(Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequest && dailyWriteRequest) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequest_, dailyWriteRequest) };


    // dailyWriteRequestDayGrowthRatio Field Functions 
    bool hasDailyWriteRequestDayGrowthRatio() const { return this->dailyWriteRequestDayGrowthRatio_ != nullptr;};
    void deleteDailyWriteRequestDayGrowthRatio() { this->dailyWriteRequestDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio & dailyWriteRequestDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(dailyWriteRequestDayGrowthRatio_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio dailyWriteRequestDayGrowthRatio() { DARABONBA_PTR_GET(dailyWriteRequestDayGrowthRatio_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setDailyWriteRequestDayGrowthRatio(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio & dailyWriteRequestDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(dailyWriteRequestDayGrowthRatio_, dailyWriteRequestDayGrowthRatio) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setDailyWriteRequestDayGrowthRatio(Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio && dailyWriteRequestDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequestDayGrowthRatio_, dailyWriteRequestDayGrowthRatio) };


    // freezeConfigDay Field Functions 
    bool hasFreezeConfigDay() const { return this->freezeConfigDay_ != nullptr;};
    void deleteFreezeConfigDay() { this->freezeConfigDay_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeConfigDay & freezeConfigDay() const { DARABONBA_PTR_GET_CONST(freezeConfigDay_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeConfigDay) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeConfigDay freezeConfigDay() { DARABONBA_PTR_GET(freezeConfigDay_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeConfigDay) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setFreezeConfigDay(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeConfigDay & freezeConfigDay) { DARABONBA_PTR_SET_VALUE(freezeConfigDay_, freezeConfigDay) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setFreezeConfigDay(Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeConfigDay && freezeConfigDay) { DARABONBA_PTR_SET_RVALUE(freezeConfigDay_, freezeConfigDay) };


    // freezeDataSize Field Functions 
    bool hasFreezeDataSize() const { return this->freezeDataSize_ != nullptr;};
    void deleteFreezeDataSize() { this->freezeDataSize_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeDataSize & freezeDataSize() const { DARABONBA_PTR_GET_CONST(freezeDataSize_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeDataSize) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeDataSize freezeDataSize() { DARABONBA_PTR_GET(freezeDataSize_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeDataSize) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setFreezeDataSize(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeDataSize & freezeDataSize) { DARABONBA_PTR_SET_VALUE(freezeDataSize_, freezeDataSize) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setFreezeDataSize(Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeDataSize && freezeDataSize) { DARABONBA_PTR_SET_RVALUE(freezeDataSize_, freezeDataSize) };


    // hotDataSize Field Functions 
    bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
    void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsHotDataSize & hotDataSize() const { DARABONBA_PTR_GET_CONST(hotDataSize_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsHotDataSize) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsHotDataSize hotDataSize() { DARABONBA_PTR_GET(hotDataSize_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsHotDataSize) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setHotDataSize(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsHotDataSize & hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setHotDataSize(Models::ListDoctorHBaseTablesResponseBodyDataMetricsHotDataSize && hotDataSize) { DARABONBA_PTR_SET_RVALUE(hotDataSize_, hotDataSize) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsLocality & locality() const { DARABONBA_PTR_GET_CONST(locality_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsLocality) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsLocality locality() { DARABONBA_PTR_GET(locality_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsLocality) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setLocality(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsLocality & locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setLocality(Models::ListDoctorHBaseTablesResponseBodyDataMetricsLocality && locality) { DARABONBA_PTR_SET_RVALUE(locality_, locality) };


    // readRequestBalance Field Functions 
    bool hasReadRequestBalance() const { return this->readRequestBalance_ != nullptr;};
    void deleteReadRequestBalance() { this->readRequestBalance_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsReadRequestBalance & readRequestBalance() const { DARABONBA_PTR_GET_CONST(readRequestBalance_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsReadRequestBalance) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsReadRequestBalance readRequestBalance() { DARABONBA_PTR_GET(readRequestBalance_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsReadRequestBalance) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setReadRequestBalance(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsReadRequestBalance & readRequestBalance) { DARABONBA_PTR_SET_VALUE(readRequestBalance_, readRequestBalance) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setReadRequestBalance(Models::ListDoctorHBaseTablesResponseBodyDataMetricsReadRequestBalance && readRequestBalance) { DARABONBA_PTR_SET_RVALUE(readRequestBalance_, readRequestBalance) };


    // regionBalance Field Functions 
    bool hasRegionBalance() const { return this->regionBalance_ != nullptr;};
    void deleteRegionBalance() { this->regionBalance_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionBalance & regionBalance() const { DARABONBA_PTR_GET_CONST(regionBalance_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionBalance) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionBalance regionBalance() { DARABONBA_PTR_GET(regionBalance_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionBalance) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setRegionBalance(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionBalance & regionBalance) { DARABONBA_PTR_SET_VALUE(regionBalance_, regionBalance) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setRegionBalance(Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionBalance && regionBalance) { DARABONBA_PTR_SET_RVALUE(regionBalance_, regionBalance) };


    // regionCount Field Functions 
    bool hasRegionCount() const { return this->regionCount_ != nullptr;};
    void deleteRegionCount() { this->regionCount_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCount & regionCount() const { DARABONBA_PTR_GET_CONST(regionCount_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCount) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCount regionCount() { DARABONBA_PTR_GET(regionCount_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCount) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setRegionCount(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCount & regionCount) { DARABONBA_PTR_SET_VALUE(regionCount_, regionCount) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setRegionCount(Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCount && regionCount) { DARABONBA_PTR_SET_RVALUE(regionCount_, regionCount) };


    // regionCountDayGrowthRatio Field Functions 
    bool hasRegionCountDayGrowthRatio() const { return this->regionCountDayGrowthRatio_ != nullptr;};
    void deleteRegionCountDayGrowthRatio() { this->regionCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCountDayGrowthRatio & regionCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(regionCountDayGrowthRatio_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCountDayGrowthRatio) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCountDayGrowthRatio regionCountDayGrowthRatio() { DARABONBA_PTR_GET(regionCountDayGrowthRatio_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCountDayGrowthRatio) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setRegionCountDayGrowthRatio(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCountDayGrowthRatio & regionCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(regionCountDayGrowthRatio_, regionCountDayGrowthRatio) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setRegionCountDayGrowthRatio(Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCountDayGrowthRatio && regionCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(regionCountDayGrowthRatio_, regionCountDayGrowthRatio) };


    // regionServerCount Field Functions 
    bool hasRegionServerCount() const { return this->regionServerCount_ != nullptr;};
    void deleteRegionServerCount() { this->regionServerCount_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionServerCount & regionServerCount() const { DARABONBA_PTR_GET_CONST(regionServerCount_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionServerCount) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionServerCount regionServerCount() { DARABONBA_PTR_GET(regionServerCount_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionServerCount) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setRegionServerCount(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionServerCount & regionServerCount) { DARABONBA_PTR_SET_VALUE(regionServerCount_, regionServerCount) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setRegionServerCount(Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionServerCount && regionServerCount) { DARABONBA_PTR_SET_RVALUE(regionServerCount_, regionServerCount) };


    // requestBalance Field Functions 
    bool hasRequestBalance() const { return this->requestBalance_ != nullptr;};
    void deleteRequestBalance() { this->requestBalance_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsRequestBalance & requestBalance() const { DARABONBA_PTR_GET_CONST(requestBalance_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsRequestBalance) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsRequestBalance requestBalance() { DARABONBA_PTR_GET(requestBalance_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsRequestBalance) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setRequestBalance(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsRequestBalance & requestBalance) { DARABONBA_PTR_SET_VALUE(requestBalance_, requestBalance) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setRequestBalance(Models::ListDoctorHBaseTablesResponseBodyDataMetricsRequestBalance && requestBalance) { DARABONBA_PTR_SET_RVALUE(requestBalance_, requestBalance) };


    // storeFileCount Field Functions 
    bool hasStoreFileCount() const { return this->storeFileCount_ != nullptr;};
    void deleteStoreFileCount() { this->storeFileCount_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCount & storeFileCount() const { DARABONBA_PTR_GET_CONST(storeFileCount_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCount) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCount storeFileCount() { DARABONBA_PTR_GET(storeFileCount_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCount) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setStoreFileCount(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCount & storeFileCount) { DARABONBA_PTR_SET_VALUE(storeFileCount_, storeFileCount) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setStoreFileCount(Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCount && storeFileCount) { DARABONBA_PTR_SET_RVALUE(storeFileCount_, storeFileCount) };


    // storeFileCountDayGrowthRatio Field Functions 
    bool hasStoreFileCountDayGrowthRatio() const { return this->storeFileCountDayGrowthRatio_ != nullptr;};
    void deleteStoreFileCountDayGrowthRatio() { this->storeFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCountDayGrowthRatio & storeFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(storeFileCountDayGrowthRatio_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCountDayGrowthRatio) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCountDayGrowthRatio storeFileCountDayGrowthRatio() { DARABONBA_PTR_GET(storeFileCountDayGrowthRatio_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCountDayGrowthRatio) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setStoreFileCountDayGrowthRatio(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCountDayGrowthRatio & storeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(storeFileCountDayGrowthRatio_, storeFileCountDayGrowthRatio) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setStoreFileCountDayGrowthRatio(Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCountDayGrowthRatio && storeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(storeFileCountDayGrowthRatio_, storeFileCountDayGrowthRatio) };


    // tableSize Field Functions 
    bool hasTableSize() const { return this->tableSize_ != nullptr;};
    void deleteTableSize() { this->tableSize_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSize & tableSize() const { DARABONBA_PTR_GET_CONST(tableSize_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSize) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSize tableSize() { DARABONBA_PTR_GET(tableSize_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSize) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setTableSize(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSize & tableSize) { DARABONBA_PTR_SET_VALUE(tableSize_, tableSize) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setTableSize(Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSize && tableSize) { DARABONBA_PTR_SET_RVALUE(tableSize_, tableSize) };


    // tableSizeDayGrowthRatio Field Functions 
    bool hasTableSizeDayGrowthRatio() const { return this->tableSizeDayGrowthRatio_ != nullptr;};
    void deleteTableSizeDayGrowthRatio() { this->tableSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSizeDayGrowthRatio & tableSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(tableSizeDayGrowthRatio_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSizeDayGrowthRatio) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSizeDayGrowthRatio tableSizeDayGrowthRatio() { DARABONBA_PTR_GET(tableSizeDayGrowthRatio_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSizeDayGrowthRatio) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setTableSizeDayGrowthRatio(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSizeDayGrowthRatio & tableSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(tableSizeDayGrowthRatio_, tableSizeDayGrowthRatio) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setTableSizeDayGrowthRatio(Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSizeDayGrowthRatio && tableSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(tableSizeDayGrowthRatio_, tableSizeDayGrowthRatio) };


    // warmConfigDay Field Functions 
    bool hasWarmConfigDay() const { return this->warmConfigDay_ != nullptr;};
    void deleteWarmConfigDay() { this->warmConfigDay_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmConfigDay & warmConfigDay() const { DARABONBA_PTR_GET_CONST(warmConfigDay_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmConfigDay) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmConfigDay warmConfigDay() { DARABONBA_PTR_GET(warmConfigDay_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmConfigDay) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setWarmConfigDay(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmConfigDay & warmConfigDay) { DARABONBA_PTR_SET_VALUE(warmConfigDay_, warmConfigDay) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setWarmConfigDay(Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmConfigDay && warmConfigDay) { DARABONBA_PTR_SET_RVALUE(warmConfigDay_, warmConfigDay) };


    // warmDataSize Field Functions 
    bool hasWarmDataSize() const { return this->warmDataSize_ != nullptr;};
    void deleteWarmDataSize() { this->warmDataSize_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmDataSize & warmDataSize() const { DARABONBA_PTR_GET_CONST(warmDataSize_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmDataSize) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmDataSize warmDataSize() { DARABONBA_PTR_GET(warmDataSize_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmDataSize) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setWarmDataSize(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmDataSize & warmDataSize) { DARABONBA_PTR_SET_VALUE(warmDataSize_, warmDataSize) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setWarmDataSize(Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmDataSize && warmDataSize) { DARABONBA_PTR_SET_RVALUE(warmDataSize_, warmDataSize) };


    // writeRequestBalance Field Functions 
    bool hasWriteRequestBalance() const { return this->writeRequestBalance_ != nullptr;};
    void deleteWriteRequestBalance() { this->writeRequestBalance_ = nullptr;};
    inline const Models::ListDoctorHBaseTablesResponseBodyDataMetricsWriteRequestBalance & writeRequestBalance() const { DARABONBA_PTR_GET_CONST(writeRequestBalance_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsWriteRequestBalance) };
    inline Models::ListDoctorHBaseTablesResponseBodyDataMetricsWriteRequestBalance writeRequestBalance() { DARABONBA_PTR_GET(writeRequestBalance_, Models::ListDoctorHBaseTablesResponseBodyDataMetricsWriteRequestBalance) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setWriteRequestBalance(const Models::ListDoctorHBaseTablesResponseBodyDataMetricsWriteRequestBalance & writeRequestBalance) { DARABONBA_PTR_SET_VALUE(writeRequestBalance_, writeRequestBalance) };
    inline ListDoctorHBaseTablesResponseBodyDataMetrics& setWriteRequestBalance(Models::ListDoctorHBaseTablesResponseBodyDataMetricsWriteRequestBalance && writeRequestBalance) { DARABONBA_PTR_SET_RVALUE(writeRequestBalance_, writeRequestBalance) };


  protected:
    // The number of days during which the table was not accessed.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdAccessDay> coldAccessDay_ = nullptr;
    // The number of consecutive days without access to data before the data is considered as very cold data.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdConfigDay> coldConfigDay_ = nullptr;
    // The size of cold data.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsColdDataSize> coldDataSize_ = nullptr;
    // The total number of read requests for the table in a day.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequest> dailyReadRequest_ = nullptr;
    // The daily increment ratio of the number of read requests in a day.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyReadRequestDayGrowthRatio> dailyReadRequestDayGrowthRatio_ = nullptr;
    // The total number of write requests for the table in a day.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequest> dailyWriteRequest_ = nullptr;
    // The daily increment ratio of the number of write requests in a day.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsDailyWriteRequestDayGrowthRatio> dailyWriteRequestDayGrowthRatio_ = nullptr;
    // The number of consecutive days without access to data before the data was considered as very cold data.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeConfigDay> freezeConfigDay_ = nullptr;
    // The size of very cold data.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsFreezeDataSize> freezeDataSize_ = nullptr;
    // The size of hot data.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsHotDataSize> hotDataSize_ = nullptr;
    // The localization rate.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsLocality> locality_ = nullptr;
    // The read balancing degree.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsReadRequestBalance> readRequestBalance_ = nullptr;
    // The balancing degree.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionBalance> regionBalance_ = nullptr;
    // The number of regions that host the table.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCount> regionCount_ = nullptr;
    // The daily increment ratio of the number of regions.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionCountDayGrowthRatio> regionCountDayGrowthRatio_ = nullptr;
    // The number of region servers that host the table.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsRegionServerCount> regionServerCount_ = nullptr;
    // The request balancing degree.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsRequestBalance> requestBalance_ = nullptr;
    // The number of StoreFiles.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCount> storeFileCount_ = nullptr;
    // The daily increment ratio of the number of StoreFiles.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsStoreFileCountDayGrowthRatio> storeFileCountDayGrowthRatio_ = nullptr;
    // The size of the table.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSize> tableSize_ = nullptr;
    // The daily increment ratio of the table size.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsTableSizeDayGrowthRatio> tableSizeDayGrowthRatio_ = nullptr;
    // The number of consecutive days without access to data before the data is considered as cold data.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmConfigDay> warmConfigDay_ = nullptr;
    // The size of warm data.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsWarmDataSize> warmDataSize_ = nullptr;
    // The write balancing degree.
    std::shared_ptr<Models::ListDoctorHBaseTablesResponseBodyDataMetricsWriteRequestBalance> writeRequestBalance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
