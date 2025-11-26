// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHIVECLUSTERRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHIVECLUSTERRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsColdDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsColdDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsColdDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsDatabaseCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsHotDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsHotDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsHotDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsLargeFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsMediumFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsMediumFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsPartitionNum.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsSmallFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsSmallFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsTableCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsTinyFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsTinyFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsTotalDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsTotalFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsWarmDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsWarmDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHiveClusterResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHiveClusterResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(ColdDataDayGrowthSize, coldDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(ColdDataRatio, coldDataRatio_);
      DARABONBA_PTR_TO_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_TO_JSON(ColdDataSizeDayGrowthRatio, coldDataSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(DatabaseCount, databaseCount_);
      DARABONBA_PTR_TO_JSON(EmptyFileCount, emptyFileCount_);
      DARABONBA_PTR_TO_JSON(EmptyFileCountDayGrowthRatio, emptyFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(EmptyFileDayGrowthCount, emptyFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(EmptyFileRatio, emptyFileRatio_);
      DARABONBA_PTR_TO_JSON(FreezeDataDayGrowthSize, freezeDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(FreezeDataRatio, freezeDataRatio_);
      DARABONBA_PTR_TO_JSON(FreezeDataSize, freezeDataSize_);
      DARABONBA_PTR_TO_JSON(FreezeDataSizeDayGrowthRatio, freezeDataSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(HotDataDayGrowthSize, hotDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(HotDataRatio, hotDataRatio_);
      DARABONBA_PTR_TO_JSON(HotDataSize, hotDataSize_);
      DARABONBA_PTR_TO_JSON(HotDataSizeDayGrowthRatio, hotDataSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(LargeFileCount, largeFileCount_);
      DARABONBA_PTR_TO_JSON(LargeFileCountDayGrowthRatio, largeFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(LargeFileDayGrowthCount, largeFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(LargeFileRatio, largeFileRatio_);
      DARABONBA_PTR_TO_JSON(MediumFileCount, mediumFileCount_);
      DARABONBA_PTR_TO_JSON(MediumFileCountDayGrowthRatio, mediumFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(MediumFileDayGrowthCount, mediumFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(MediumFileRatio, mediumFileRatio_);
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(SmallFileCount, smallFileCount_);
      DARABONBA_PTR_TO_JSON(SmallFileCountDayGrowthRatio, smallFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(SmallFileDayGrowthCount, smallFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(SmallFileRatio, smallFileRatio_);
      DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
      DARABONBA_PTR_TO_JSON(TinyFileCount, tinyFileCount_);
      DARABONBA_PTR_TO_JSON(TinyFileCountDayGrowthRatio, tinyFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(TinyFileDayGrowthCount, tinyFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(TinyFileRatio, tinyFileRatio_);
      DARABONBA_PTR_TO_JSON(TotalDataDayGrowthSize, totalDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
      DARABONBA_PTR_TO_JSON(TotalDataSizeDayGrowthRatio, totalDataSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(TotalFileCount, totalFileCount_);
      DARABONBA_PTR_TO_JSON(TotalFileCountDayGrowthRatio, totalFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(TotalFileDayGrowthCount, totalFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(WarmDataDayGrowthSize, warmDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(WarmDataRatio, warmDataRatio_);
      DARABONBA_PTR_TO_JSON(WarmDataSize, warmDataSize_);
      DARABONBA_PTR_TO_JSON(WarmDataSizeDayGrowthRatio, warmDataSizeDayGrowthRatio_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHiveClusterResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(ColdDataDayGrowthSize, coldDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(ColdDataRatio, coldDataRatio_);
      DARABONBA_PTR_FROM_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_FROM_JSON(ColdDataSizeDayGrowthRatio, coldDataSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(DatabaseCount, databaseCount_);
      DARABONBA_PTR_FROM_JSON(EmptyFileCount, emptyFileCount_);
      DARABONBA_PTR_FROM_JSON(EmptyFileCountDayGrowthRatio, emptyFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(EmptyFileDayGrowthCount, emptyFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(EmptyFileRatio, emptyFileRatio_);
      DARABONBA_PTR_FROM_JSON(FreezeDataDayGrowthSize, freezeDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(FreezeDataRatio, freezeDataRatio_);
      DARABONBA_PTR_FROM_JSON(FreezeDataSize, freezeDataSize_);
      DARABONBA_PTR_FROM_JSON(FreezeDataSizeDayGrowthRatio, freezeDataSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(HotDataDayGrowthSize, hotDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(HotDataRatio, hotDataRatio_);
      DARABONBA_PTR_FROM_JSON(HotDataSize, hotDataSize_);
      DARABONBA_PTR_FROM_JSON(HotDataSizeDayGrowthRatio, hotDataSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(LargeFileCount, largeFileCount_);
      DARABONBA_PTR_FROM_JSON(LargeFileCountDayGrowthRatio, largeFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(LargeFileDayGrowthCount, largeFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(LargeFileRatio, largeFileRatio_);
      DARABONBA_PTR_FROM_JSON(MediumFileCount, mediumFileCount_);
      DARABONBA_PTR_FROM_JSON(MediumFileCountDayGrowthRatio, mediumFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(MediumFileDayGrowthCount, mediumFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(MediumFileRatio, mediumFileRatio_);
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(SmallFileCount, smallFileCount_);
      DARABONBA_PTR_FROM_JSON(SmallFileCountDayGrowthRatio, smallFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(SmallFileDayGrowthCount, smallFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(SmallFileRatio, smallFileRatio_);
      DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
      DARABONBA_PTR_FROM_JSON(TinyFileCount, tinyFileCount_);
      DARABONBA_PTR_FROM_JSON(TinyFileCountDayGrowthRatio, tinyFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(TinyFileDayGrowthCount, tinyFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(TinyFileRatio, tinyFileRatio_);
      DARABONBA_PTR_FROM_JSON(TotalDataDayGrowthSize, totalDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
      DARABONBA_PTR_FROM_JSON(TotalDataSizeDayGrowthRatio, totalDataSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(TotalFileCount, totalFileCount_);
      DARABONBA_PTR_FROM_JSON(TotalFileCountDayGrowthRatio, totalFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(TotalFileDayGrowthCount, totalFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(WarmDataDayGrowthSize, warmDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(WarmDataRatio, warmDataRatio_);
      DARABONBA_PTR_FROM_JSON(WarmDataSize, warmDataSize_);
      DARABONBA_PTR_FROM_JSON(WarmDataSizeDayGrowthRatio, warmDataSizeDayGrowthRatio_);
    };
    GetDoctorHiveClusterResponseBodyDataMetrics() = default ;
    GetDoctorHiveClusterResponseBodyDataMetrics(const GetDoctorHiveClusterResponseBodyDataMetrics &) = default ;
    GetDoctorHiveClusterResponseBodyDataMetrics(GetDoctorHiveClusterResponseBodyDataMetrics &&) = default ;
    GetDoctorHiveClusterResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHiveClusterResponseBodyDataMetrics() = default ;
    GetDoctorHiveClusterResponseBodyDataMetrics& operator=(const GetDoctorHiveClusterResponseBodyDataMetrics &) = default ;
    GetDoctorHiveClusterResponseBodyDataMetrics& operator=(GetDoctorHiveClusterResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coldDataDayGrowthSize_ == nullptr
        && return this->coldDataRatio_ == nullptr && return this->coldDataSize_ == nullptr && return this->coldDataSizeDayGrowthRatio_ == nullptr && return this->databaseCount_ == nullptr && return this->emptyFileCount_ == nullptr
        && return this->emptyFileCountDayGrowthRatio_ == nullptr && return this->emptyFileDayGrowthCount_ == nullptr && return this->emptyFileRatio_ == nullptr && return this->freezeDataDayGrowthSize_ == nullptr && return this->freezeDataRatio_ == nullptr
        && return this->freezeDataSize_ == nullptr && return this->freezeDataSizeDayGrowthRatio_ == nullptr && return this->hotDataDayGrowthSize_ == nullptr && return this->hotDataRatio_ == nullptr && return this->hotDataSize_ == nullptr
        && return this->hotDataSizeDayGrowthRatio_ == nullptr && return this->largeFileCount_ == nullptr && return this->largeFileCountDayGrowthRatio_ == nullptr && return this->largeFileDayGrowthCount_ == nullptr && return this->largeFileRatio_ == nullptr
        && return this->mediumFileCount_ == nullptr && return this->mediumFileCountDayGrowthRatio_ == nullptr && return this->mediumFileDayGrowthCount_ == nullptr && return this->mediumFileRatio_ == nullptr && return this->partitionNum_ == nullptr
        && return this->smallFileCount_ == nullptr && return this->smallFileCountDayGrowthRatio_ == nullptr && return this->smallFileDayGrowthCount_ == nullptr && return this->smallFileRatio_ == nullptr && return this->tableCount_ == nullptr
        && return this->tinyFileCount_ == nullptr && return this->tinyFileCountDayGrowthRatio_ == nullptr && return this->tinyFileDayGrowthCount_ == nullptr && return this->tinyFileRatio_ == nullptr && return this->totalDataDayGrowthSize_ == nullptr
        && return this->totalDataSize_ == nullptr && return this->totalDataSizeDayGrowthRatio_ == nullptr && return this->totalFileCount_ == nullptr && return this->totalFileCountDayGrowthRatio_ == nullptr && return this->totalFileDayGrowthCount_ == nullptr
        && return this->warmDataDayGrowthSize_ == nullptr && return this->warmDataRatio_ == nullptr && return this->warmDataSize_ == nullptr && return this->warmDataSizeDayGrowthRatio_ == nullptr; };
    // coldDataDayGrowthSize Field Functions 
    bool hasColdDataDayGrowthSize() const { return this->coldDataDayGrowthSize_ != nullptr;};
    void deleteColdDataDayGrowthSize() { this->coldDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(coldDataDayGrowthSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataDayGrowthSize coldDataDayGrowthSize() { DARABONBA_PTR_GET(coldDataDayGrowthSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setColdDataDayGrowthSize(const Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setColdDataDayGrowthSize(Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataDayGrowthSize && coldDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };


    // coldDataRatio Field Functions 
    bool hasColdDataRatio() const { return this->coldDataRatio_ != nullptr;};
    void deleteColdDataRatio() { this->coldDataRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataRatio & coldDataRatio() const { DARABONBA_PTR_GET_CONST(coldDataRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataRatio coldDataRatio() { DARABONBA_PTR_GET(coldDataRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setColdDataRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataRatio & coldDataRatio) { DARABONBA_PTR_SET_VALUE(coldDataRatio_, coldDataRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setColdDataRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataRatio && coldDataRatio) { DARABONBA_PTR_SET_RVALUE(coldDataRatio_, coldDataRatio) };


    // coldDataSize Field Functions 
    bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
    void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSize & coldDataSize() const { DARABONBA_PTR_GET_CONST(coldDataSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSize) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSize coldDataSize() { DARABONBA_PTR_GET(coldDataSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setColdDataSize(const Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSize & coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setColdDataSize(Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSize && coldDataSize) { DARABONBA_PTR_SET_RVALUE(coldDataSize_, coldDataSize) };


    // coldDataSizeDayGrowthRatio Field Functions 
    bool hasColdDataSizeDayGrowthRatio() const { return this->coldDataSizeDayGrowthRatio_ != nullptr;};
    void deleteColdDataSizeDayGrowthRatio() { this->coldDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(coldDataSizeDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio coldDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(coldDataSizeDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio && coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };


    // databaseCount Field Functions 
    bool hasDatabaseCount() const { return this->databaseCount_ != nullptr;};
    void deleteDatabaseCount() { this->databaseCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsDatabaseCount & databaseCount() const { DARABONBA_PTR_GET_CONST(databaseCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsDatabaseCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsDatabaseCount databaseCount() { DARABONBA_PTR_GET(databaseCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsDatabaseCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setDatabaseCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsDatabaseCount & databaseCount) { DARABONBA_PTR_SET_VALUE(databaseCount_, databaseCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setDatabaseCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsDatabaseCount && databaseCount) { DARABONBA_PTR_SET_RVALUE(databaseCount_, databaseCount) };


    // emptyFileCount Field Functions 
    bool hasEmptyFileCount() const { return this->emptyFileCount_ != nullptr;};
    void deleteEmptyFileCount() { this->emptyFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCount & emptyFileCount() const { DARABONBA_PTR_GET_CONST(emptyFileCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCount emptyFileCount() { DARABONBA_PTR_GET(emptyFileCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setEmptyFileCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCount & emptyFileCount) { DARABONBA_PTR_SET_VALUE(emptyFileCount_, emptyFileCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setEmptyFileCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCount && emptyFileCount) { DARABONBA_PTR_SET_RVALUE(emptyFileCount_, emptyFileCount) };


    // emptyFileCountDayGrowthRatio Field Functions 
    bool hasEmptyFileCountDayGrowthRatio() const { return this->emptyFileCountDayGrowthRatio_ != nullptr;};
    void deleteEmptyFileCountDayGrowthRatio() { this->emptyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(emptyFileCountDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio emptyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(emptyFileCountDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio && emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };


    // emptyFileDayGrowthCount Field Functions 
    bool hasEmptyFileDayGrowthCount() const { return this->emptyFileDayGrowthCount_ != nullptr;};
    void deleteEmptyFileDayGrowthCount() { this->emptyFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(emptyFileDayGrowthCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileDayGrowthCount emptyFileDayGrowthCount() { DARABONBA_PTR_GET(emptyFileDayGrowthCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setEmptyFileDayGrowthCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setEmptyFileDayGrowthCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileDayGrowthCount && emptyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };


    // emptyFileRatio Field Functions 
    bool hasEmptyFileRatio() const { return this->emptyFileRatio_ != nullptr;};
    void deleteEmptyFileRatio() { this->emptyFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileRatio & emptyFileRatio() const { DARABONBA_PTR_GET_CONST(emptyFileRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileRatio emptyFileRatio() { DARABONBA_PTR_GET(emptyFileRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setEmptyFileRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileRatio & emptyFileRatio) { DARABONBA_PTR_SET_VALUE(emptyFileRatio_, emptyFileRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setEmptyFileRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileRatio && emptyFileRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileRatio_, emptyFileRatio) };


    // freezeDataDayGrowthSize Field Functions 
    bool hasFreezeDataDayGrowthSize() const { return this->freezeDataDayGrowthSize_ != nullptr;};
    void deleteFreezeDataDayGrowthSize() { this->freezeDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(freezeDataDayGrowthSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataDayGrowthSize freezeDataDayGrowthSize() { DARABONBA_PTR_GET(freezeDataDayGrowthSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setFreezeDataDayGrowthSize(const Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setFreezeDataDayGrowthSize(Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataDayGrowthSize && freezeDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };


    // freezeDataRatio Field Functions 
    bool hasFreezeDataRatio() const { return this->freezeDataRatio_ != nullptr;};
    void deleteFreezeDataRatio() { this->freezeDataRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataRatio & freezeDataRatio() const { DARABONBA_PTR_GET_CONST(freezeDataRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataRatio freezeDataRatio() { DARABONBA_PTR_GET(freezeDataRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setFreezeDataRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataRatio & freezeDataRatio) { DARABONBA_PTR_SET_VALUE(freezeDataRatio_, freezeDataRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setFreezeDataRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataRatio && freezeDataRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataRatio_, freezeDataRatio) };


    // freezeDataSize Field Functions 
    bool hasFreezeDataSize() const { return this->freezeDataSize_ != nullptr;};
    void deleteFreezeDataSize() { this->freezeDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSize & freezeDataSize() const { DARABONBA_PTR_GET_CONST(freezeDataSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSize) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSize freezeDataSize() { DARABONBA_PTR_GET(freezeDataSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setFreezeDataSize(const Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSize & freezeDataSize) { DARABONBA_PTR_SET_VALUE(freezeDataSize_, freezeDataSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setFreezeDataSize(Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSize && freezeDataSize) { DARABONBA_PTR_SET_RVALUE(freezeDataSize_, freezeDataSize) };


    // freezeDataSizeDayGrowthRatio Field Functions 
    bool hasFreezeDataSizeDayGrowthRatio() const { return this->freezeDataSizeDayGrowthRatio_ != nullptr;};
    void deleteFreezeDataSizeDayGrowthRatio() { this->freezeDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(freezeDataSizeDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio freezeDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(freezeDataSizeDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio && freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };


    // hotDataDayGrowthSize Field Functions 
    bool hasHotDataDayGrowthSize() const { return this->hotDataDayGrowthSize_ != nullptr;};
    void deleteHotDataDayGrowthSize() { this->hotDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(hotDataDayGrowthSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataDayGrowthSize hotDataDayGrowthSize() { DARABONBA_PTR_GET(hotDataDayGrowthSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setHotDataDayGrowthSize(const Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setHotDataDayGrowthSize(Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataDayGrowthSize && hotDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };


    // hotDataRatio Field Functions 
    bool hasHotDataRatio() const { return this->hotDataRatio_ != nullptr;};
    void deleteHotDataRatio() { this->hotDataRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataRatio & hotDataRatio() const { DARABONBA_PTR_GET_CONST(hotDataRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataRatio hotDataRatio() { DARABONBA_PTR_GET(hotDataRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setHotDataRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataRatio & hotDataRatio) { DARABONBA_PTR_SET_VALUE(hotDataRatio_, hotDataRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setHotDataRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataRatio && hotDataRatio) { DARABONBA_PTR_SET_RVALUE(hotDataRatio_, hotDataRatio) };


    // hotDataSize Field Functions 
    bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
    void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSize & hotDataSize() const { DARABONBA_PTR_GET_CONST(hotDataSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSize) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSize hotDataSize() { DARABONBA_PTR_GET(hotDataSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setHotDataSize(const Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSize & hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setHotDataSize(Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSize && hotDataSize) { DARABONBA_PTR_SET_RVALUE(hotDataSize_, hotDataSize) };


    // hotDataSizeDayGrowthRatio Field Functions 
    bool hasHotDataSizeDayGrowthRatio() const { return this->hotDataSizeDayGrowthRatio_ != nullptr;};
    void deleteHotDataSizeDayGrowthRatio() { this->hotDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(hotDataSizeDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio hotDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(hotDataSizeDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio && hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };


    // largeFileCount Field Functions 
    bool hasLargeFileCount() const { return this->largeFileCount_ != nullptr;};
    void deleteLargeFileCount() { this->largeFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCount & largeFileCount() const { DARABONBA_PTR_GET_CONST(largeFileCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCount largeFileCount() { DARABONBA_PTR_GET(largeFileCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setLargeFileCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCount & largeFileCount) { DARABONBA_PTR_SET_VALUE(largeFileCount_, largeFileCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setLargeFileCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCount && largeFileCount) { DARABONBA_PTR_SET_RVALUE(largeFileCount_, largeFileCount) };


    // largeFileCountDayGrowthRatio Field Functions 
    bool hasLargeFileCountDayGrowthRatio() const { return this->largeFileCountDayGrowthRatio_ != nullptr;};
    void deleteLargeFileCountDayGrowthRatio() { this->largeFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(largeFileCountDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio largeFileCountDayGrowthRatio() { DARABONBA_PTR_GET(largeFileCountDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio && largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };


    // largeFileDayGrowthCount Field Functions 
    bool hasLargeFileDayGrowthCount() const { return this->largeFileDayGrowthCount_ != nullptr;};
    void deleteLargeFileDayGrowthCount() { this->largeFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(largeFileDayGrowthCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileDayGrowthCount largeFileDayGrowthCount() { DARABONBA_PTR_GET(largeFileDayGrowthCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setLargeFileDayGrowthCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setLargeFileDayGrowthCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileDayGrowthCount && largeFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };


    // largeFileRatio Field Functions 
    bool hasLargeFileRatio() const { return this->largeFileRatio_ != nullptr;};
    void deleteLargeFileRatio() { this->largeFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio & largeFileRatio() const { DARABONBA_PTR_GET_CONST(largeFileRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio largeFileRatio() { DARABONBA_PTR_GET(largeFileRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setLargeFileRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio & largeFileRatio) { DARABONBA_PTR_SET_VALUE(largeFileRatio_, largeFileRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setLargeFileRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio && largeFileRatio) { DARABONBA_PTR_SET_RVALUE(largeFileRatio_, largeFileRatio) };


    // mediumFileCount Field Functions 
    bool hasMediumFileCount() const { return this->mediumFileCount_ != nullptr;};
    void deleteMediumFileCount() { this->mediumFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCount & mediumFileCount() const { DARABONBA_PTR_GET_CONST(mediumFileCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCount mediumFileCount() { DARABONBA_PTR_GET(mediumFileCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setMediumFileCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCount & mediumFileCount) { DARABONBA_PTR_SET_VALUE(mediumFileCount_, mediumFileCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setMediumFileCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCount && mediumFileCount) { DARABONBA_PTR_SET_RVALUE(mediumFileCount_, mediumFileCount) };


    // mediumFileCountDayGrowthRatio Field Functions 
    bool hasMediumFileCountDayGrowthRatio() const { return this->mediumFileCountDayGrowthRatio_ != nullptr;};
    void deleteMediumFileCountDayGrowthRatio() { this->mediumFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(mediumFileCountDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio mediumFileCountDayGrowthRatio() { DARABONBA_PTR_GET(mediumFileCountDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio && mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };


    // mediumFileDayGrowthCount Field Functions 
    bool hasMediumFileDayGrowthCount() const { return this->mediumFileDayGrowthCount_ != nullptr;};
    void deleteMediumFileDayGrowthCount() { this->mediumFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(mediumFileDayGrowthCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileDayGrowthCount mediumFileDayGrowthCount() { DARABONBA_PTR_GET(mediumFileDayGrowthCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setMediumFileDayGrowthCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setMediumFileDayGrowthCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileDayGrowthCount && mediumFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };


    // mediumFileRatio Field Functions 
    bool hasMediumFileRatio() const { return this->mediumFileRatio_ != nullptr;};
    void deleteMediumFileRatio() { this->mediumFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileRatio & mediumFileRatio() const { DARABONBA_PTR_GET_CONST(mediumFileRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileRatio mediumFileRatio() { DARABONBA_PTR_GET(mediumFileRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setMediumFileRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileRatio & mediumFileRatio) { DARABONBA_PTR_SET_VALUE(mediumFileRatio_, mediumFileRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setMediumFileRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileRatio && mediumFileRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileRatio_, mediumFileRatio) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsPartitionNum & partitionNum() const { DARABONBA_PTR_GET_CONST(partitionNum_, Models::GetDoctorHiveClusterResponseBodyDataMetricsPartitionNum) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsPartitionNum partitionNum() { DARABONBA_PTR_GET(partitionNum_, Models::GetDoctorHiveClusterResponseBodyDataMetricsPartitionNum) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setPartitionNum(const Models::GetDoctorHiveClusterResponseBodyDataMetricsPartitionNum & partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setPartitionNum(Models::GetDoctorHiveClusterResponseBodyDataMetricsPartitionNum && partitionNum) { DARABONBA_PTR_SET_RVALUE(partitionNum_, partitionNum) };


    // smallFileCount Field Functions 
    bool hasSmallFileCount() const { return this->smallFileCount_ != nullptr;};
    void deleteSmallFileCount() { this->smallFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCount & smallFileCount() const { DARABONBA_PTR_GET_CONST(smallFileCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCount smallFileCount() { DARABONBA_PTR_GET(smallFileCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setSmallFileCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCount & smallFileCount) { DARABONBA_PTR_SET_VALUE(smallFileCount_, smallFileCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setSmallFileCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCount && smallFileCount) { DARABONBA_PTR_SET_RVALUE(smallFileCount_, smallFileCount) };


    // smallFileCountDayGrowthRatio Field Functions 
    bool hasSmallFileCountDayGrowthRatio() const { return this->smallFileCountDayGrowthRatio_ != nullptr;};
    void deleteSmallFileCountDayGrowthRatio() { this->smallFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(smallFileCountDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio smallFileCountDayGrowthRatio() { DARABONBA_PTR_GET(smallFileCountDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio && smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };


    // smallFileDayGrowthCount Field Functions 
    bool hasSmallFileDayGrowthCount() const { return this->smallFileDayGrowthCount_ != nullptr;};
    void deleteSmallFileDayGrowthCount() { this->smallFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(smallFileDayGrowthCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileDayGrowthCount smallFileDayGrowthCount() { DARABONBA_PTR_GET(smallFileDayGrowthCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setSmallFileDayGrowthCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setSmallFileDayGrowthCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileDayGrowthCount && smallFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };


    // smallFileRatio Field Functions 
    bool hasSmallFileRatio() const { return this->smallFileRatio_ != nullptr;};
    void deleteSmallFileRatio() { this->smallFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileRatio & smallFileRatio() const { DARABONBA_PTR_GET_CONST(smallFileRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileRatio smallFileRatio() { DARABONBA_PTR_GET(smallFileRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setSmallFileRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileRatio & smallFileRatio) { DARABONBA_PTR_SET_VALUE(smallFileRatio_, smallFileRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setSmallFileRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileRatio && smallFileRatio) { DARABONBA_PTR_SET_RVALUE(smallFileRatio_, smallFileRatio) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsTableCount & tableCount() const { DARABONBA_PTR_GET_CONST(tableCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTableCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsTableCount tableCount() { DARABONBA_PTR_GET(tableCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTableCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTableCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsTableCount & tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTableCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsTableCount && tableCount) { DARABONBA_PTR_SET_RVALUE(tableCount_, tableCount) };


    // tinyFileCount Field Functions 
    bool hasTinyFileCount() const { return this->tinyFileCount_ != nullptr;};
    void deleteTinyFileCount() { this->tinyFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCount & tinyFileCount() const { DARABONBA_PTR_GET_CONST(tinyFileCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCount tinyFileCount() { DARABONBA_PTR_GET(tinyFileCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTinyFileCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCount & tinyFileCount) { DARABONBA_PTR_SET_VALUE(tinyFileCount_, tinyFileCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTinyFileCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCount && tinyFileCount) { DARABONBA_PTR_SET_RVALUE(tinyFileCount_, tinyFileCount) };


    // tinyFileCountDayGrowthRatio Field Functions 
    bool hasTinyFileCountDayGrowthRatio() const { return this->tinyFileCountDayGrowthRatio_ != nullptr;};
    void deleteTinyFileCountDayGrowthRatio() { this->tinyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(tinyFileCountDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio tinyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(tinyFileCountDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio && tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };


    // tinyFileDayGrowthCount Field Functions 
    bool hasTinyFileDayGrowthCount() const { return this->tinyFileDayGrowthCount_ != nullptr;};
    void deleteTinyFileDayGrowthCount() { this->tinyFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(tinyFileDayGrowthCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileDayGrowthCount tinyFileDayGrowthCount() { DARABONBA_PTR_GET(tinyFileDayGrowthCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTinyFileDayGrowthCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTinyFileDayGrowthCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileDayGrowthCount && tinyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };


    // tinyFileRatio Field Functions 
    bool hasTinyFileRatio() const { return this->tinyFileRatio_ != nullptr;};
    void deleteTinyFileRatio() { this->tinyFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileRatio & tinyFileRatio() const { DARABONBA_PTR_GET_CONST(tinyFileRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileRatio tinyFileRatio() { DARABONBA_PTR_GET(tinyFileRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTinyFileRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileRatio & tinyFileRatio) { DARABONBA_PTR_SET_VALUE(tinyFileRatio_, tinyFileRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTinyFileRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileRatio && tinyFileRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileRatio_, tinyFileRatio) };


    // totalDataDayGrowthSize Field Functions 
    bool hasTotalDataDayGrowthSize() const { return this->totalDataDayGrowthSize_ != nullptr;};
    void deleteTotalDataDayGrowthSize() { this->totalDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(totalDataDayGrowthSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataDayGrowthSize totalDataDayGrowthSize() { DARABONBA_PTR_GET(totalDataDayGrowthSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTotalDataDayGrowthSize(const Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTotalDataDayGrowthSize(Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataDayGrowthSize && totalDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };


    // totalDataSize Field Functions 
    bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
    void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSize & totalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSize) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSize totalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTotalDataSize(const Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTotalDataSize(Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


    // totalDataSizeDayGrowthRatio Field Functions 
    bool hasTotalDataSizeDayGrowthRatio() const { return this->totalDataSizeDayGrowthRatio_ != nullptr;};
    void deleteTotalDataSizeDayGrowthRatio() { this->totalDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalDataSizeDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio totalDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(totalDataSizeDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio && totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCount & totalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCount totalFileCount() { DARABONBA_PTR_GET(totalFileCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTotalFileCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCount & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTotalFileCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCount && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


    // totalFileCountDayGrowthRatio Field Functions 
    bool hasTotalFileCountDayGrowthRatio() const { return this->totalFileCountDayGrowthRatio_ != nullptr;};
    void deleteTotalFileCountDayGrowthRatio() { this->totalFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalFileCountDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio totalFileCountDayGrowthRatio() { DARABONBA_PTR_GET(totalFileCountDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio && totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };


    // totalFileDayGrowthCount Field Functions 
    bool hasTotalFileDayGrowthCount() const { return this->totalFileDayGrowthCount_ != nullptr;};
    void deleteTotalFileDayGrowthCount() { this->totalFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(totalFileDayGrowthCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileDayGrowthCount totalFileDayGrowthCount() { DARABONBA_PTR_GET(totalFileDayGrowthCount_, Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTotalFileDayGrowthCount(const Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setTotalFileDayGrowthCount(Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileDayGrowthCount && totalFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };


    // warmDataDayGrowthSize Field Functions 
    bool hasWarmDataDayGrowthSize() const { return this->warmDataDayGrowthSize_ != nullptr;};
    void deleteWarmDataDayGrowthSize() { this->warmDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(warmDataDayGrowthSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataDayGrowthSize warmDataDayGrowthSize() { DARABONBA_PTR_GET(warmDataDayGrowthSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setWarmDataDayGrowthSize(const Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setWarmDataDayGrowthSize(Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataDayGrowthSize && warmDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };


    // warmDataRatio Field Functions 
    bool hasWarmDataRatio() const { return this->warmDataRatio_ != nullptr;};
    void deleteWarmDataRatio() { this->warmDataRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataRatio & warmDataRatio() const { DARABONBA_PTR_GET_CONST(warmDataRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataRatio warmDataRatio() { DARABONBA_PTR_GET(warmDataRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setWarmDataRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataRatio & warmDataRatio) { DARABONBA_PTR_SET_VALUE(warmDataRatio_, warmDataRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setWarmDataRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataRatio && warmDataRatio) { DARABONBA_PTR_SET_RVALUE(warmDataRatio_, warmDataRatio) };


    // warmDataSize Field Functions 
    bool hasWarmDataSize() const { return this->warmDataSize_ != nullptr;};
    void deleteWarmDataSize() { this->warmDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSize & warmDataSize() const { DARABONBA_PTR_GET_CONST(warmDataSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSize) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSize warmDataSize() { DARABONBA_PTR_GET(warmDataSize_, Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setWarmDataSize(const Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSize & warmDataSize) { DARABONBA_PTR_SET_VALUE(warmDataSize_, warmDataSize) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setWarmDataSize(Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSize && warmDataSize) { DARABONBA_PTR_SET_RVALUE(warmDataSize_, warmDataSize) };


    // warmDataSizeDayGrowthRatio Field Functions 
    bool hasWarmDataSizeDayGrowthRatio() const { return this->warmDataSizeDayGrowthRatio_ != nullptr;};
    void deleteWarmDataSizeDayGrowthRatio() { this->warmDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(warmDataSizeDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio warmDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(warmDataSizeDayGrowthRatio_, Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(const Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };
    inline GetDoctorHiveClusterResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio && warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };


  protected:
    // The daily increment of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataDayGrowthSize> coldDataDayGrowthSize_ = nullptr;
    // The proportion of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataRatio> coldDataRatio_ = nullptr;
    // The amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSize> coldDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio> coldDataSizeDayGrowthRatio_ = nullptr;
    // The number of databases.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsDatabaseCount> databaseCount_ = nullptr;
    // The number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCount> emptyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio> emptyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileDayGrowthCount> emptyFileDayGrowthCount_ = nullptr;
    // The proportion of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsEmptyFileRatio> emptyFileRatio_ = nullptr;
    // The daily increment of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataDayGrowthSize> freezeDataDayGrowthSize_ = nullptr;
    // The proportion of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataRatio> freezeDataRatio_ = nullptr;
    // The amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSize> freezeDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio> freezeDataSizeDayGrowthRatio_ = nullptr;
    // The daily increment of the amount of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataDayGrowthSize> hotDataDayGrowthSize_ = nullptr;
    // The proportion of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataRatio> hotDataRatio_ = nullptr;
    // The amount of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSize> hotDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio> hotDataSizeDayGrowthRatio_ = nullptr;
    // The number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCount> largeFileCount_ = nullptr;
    // The day-to-day growth rate of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio> largeFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileDayGrowthCount> largeFileDayGrowthCount_ = nullptr;
    // The proportion of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio> largeFileRatio_ = nullptr;
    // The number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCount> mediumFileCount_ = nullptr;
    // The day-to-day growth rate of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio> mediumFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileDayGrowthCount> mediumFileDayGrowthCount_ = nullptr;
    // The proportion of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsMediumFileRatio> mediumFileRatio_ = nullptr;
    // The number of partitions.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsPartitionNum> partitionNum_ = nullptr;
    // The number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCount> smallFileCount_ = nullptr;
    // The day-to-day growth rate of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio> smallFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileDayGrowthCount> smallFileDayGrowthCount_ = nullptr;
    // The proportion of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsSmallFileRatio> smallFileRatio_ = nullptr;
    // The number of tables.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsTableCount> tableCount_ = nullptr;
    // The number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCount> tinyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio> tinyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileDayGrowthCount> tinyFileDayGrowthCount_ = nullptr;
    // The proportion of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsTinyFileRatio> tinyFileRatio_ = nullptr;
    // The daily incremental of the amount of total data.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataDayGrowthSize> totalDataDayGrowthSize_ = nullptr;
    // The total amount of data.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSize> totalDataSize_ = nullptr;
    // The day-to-day growth rate of the total data volume.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio> totalDataSizeDayGrowthRatio_ = nullptr;
    // The total number of files.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCount> totalFileCount_ = nullptr;
    // The day-to-day growth rate of the total number of files.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio> totalFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the total number of files.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsTotalFileDayGrowthCount> totalFileDayGrowthCount_ = nullptr;
    // The daily increment of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataDayGrowthSize> warmDataDayGrowthSize_ = nullptr;
    // The proportion of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataRatio> warmDataRatio_ = nullptr;
    // The amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSize> warmDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::GetDoctorHiveClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio> warmDataSizeDayGrowthRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
