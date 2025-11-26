// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHIVEDATABASERESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHIVEDATABASERESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsPartitionNum.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsTableCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSizeDayGrowthRatio.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHiveDatabaseResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHiveDatabaseResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(ColdDataDayGrowthSize, coldDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(ColdDataRatio, coldDataRatio_);
      DARABONBA_PTR_TO_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_TO_JSON(ColdDataSizeDayGrowthRatio, coldDataSizeDayGrowthRatio_);
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
    friend void from_json(const Darabonba::Json& j, GetDoctorHiveDatabaseResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(ColdDataDayGrowthSize, coldDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(ColdDataRatio, coldDataRatio_);
      DARABONBA_PTR_FROM_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_FROM_JSON(ColdDataSizeDayGrowthRatio, coldDataSizeDayGrowthRatio_);
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
    GetDoctorHiveDatabaseResponseBodyDataMetrics() = default ;
    GetDoctorHiveDatabaseResponseBodyDataMetrics(const GetDoctorHiveDatabaseResponseBodyDataMetrics &) = default ;
    GetDoctorHiveDatabaseResponseBodyDataMetrics(GetDoctorHiveDatabaseResponseBodyDataMetrics &&) = default ;
    GetDoctorHiveDatabaseResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHiveDatabaseResponseBodyDataMetrics() = default ;
    GetDoctorHiveDatabaseResponseBodyDataMetrics& operator=(const GetDoctorHiveDatabaseResponseBodyDataMetrics &) = default ;
    GetDoctorHiveDatabaseResponseBodyDataMetrics& operator=(GetDoctorHiveDatabaseResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coldDataDayGrowthSize_ == nullptr
        && return this->coldDataRatio_ == nullptr && return this->coldDataSize_ == nullptr && return this->coldDataSizeDayGrowthRatio_ == nullptr && return this->emptyFileCount_ == nullptr && return this->emptyFileCountDayGrowthRatio_ == nullptr
        && return this->emptyFileDayGrowthCount_ == nullptr && return this->emptyFileRatio_ == nullptr && return this->freezeDataDayGrowthSize_ == nullptr && return this->freezeDataRatio_ == nullptr && return this->freezeDataSize_ == nullptr
        && return this->freezeDataSizeDayGrowthRatio_ == nullptr && return this->hotDataDayGrowthSize_ == nullptr && return this->hotDataRatio_ == nullptr && return this->hotDataSize_ == nullptr && return this->hotDataSizeDayGrowthRatio_ == nullptr
        && return this->largeFileCount_ == nullptr && return this->largeFileCountDayGrowthRatio_ == nullptr && return this->largeFileDayGrowthCount_ == nullptr && return this->largeFileRatio_ == nullptr && return this->mediumFileCount_ == nullptr
        && return this->mediumFileCountDayGrowthRatio_ == nullptr && return this->mediumFileDayGrowthCount_ == nullptr && return this->mediumFileRatio_ == nullptr && return this->partitionNum_ == nullptr && return this->smallFileCount_ == nullptr
        && return this->smallFileCountDayGrowthRatio_ == nullptr && return this->smallFileDayGrowthCount_ == nullptr && return this->smallFileRatio_ == nullptr && return this->tableCount_ == nullptr && return this->tinyFileCount_ == nullptr
        && return this->tinyFileCountDayGrowthRatio_ == nullptr && return this->tinyFileDayGrowthCount_ == nullptr && return this->tinyFileRatio_ == nullptr && return this->totalDataDayGrowthSize_ == nullptr && return this->totalDataSize_ == nullptr
        && return this->totalDataSizeDayGrowthRatio_ == nullptr && return this->totalFileCount_ == nullptr && return this->totalFileCountDayGrowthRatio_ == nullptr && return this->totalFileDayGrowthCount_ == nullptr && return this->warmDataDayGrowthSize_ == nullptr
        && return this->warmDataRatio_ == nullptr && return this->warmDataSize_ == nullptr && return this->warmDataSizeDayGrowthRatio_ == nullptr; };
    // coldDataDayGrowthSize Field Functions 
    bool hasColdDataDayGrowthSize() const { return this->coldDataDayGrowthSize_ != nullptr;};
    void deleteColdDataDayGrowthSize() { this->coldDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(coldDataDayGrowthSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataDayGrowthSize coldDataDayGrowthSize() { DARABONBA_PTR_GET(coldDataDayGrowthSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setColdDataDayGrowthSize(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setColdDataDayGrowthSize(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataDayGrowthSize && coldDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };


    // coldDataRatio Field Functions 
    bool hasColdDataRatio() const { return this->coldDataRatio_ != nullptr;};
    void deleteColdDataRatio() { this->coldDataRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataRatio & coldDataRatio() const { DARABONBA_PTR_GET_CONST(coldDataRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataRatio coldDataRatio() { DARABONBA_PTR_GET(coldDataRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setColdDataRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataRatio & coldDataRatio) { DARABONBA_PTR_SET_VALUE(coldDataRatio_, coldDataRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setColdDataRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataRatio && coldDataRatio) { DARABONBA_PTR_SET_RVALUE(coldDataRatio_, coldDataRatio) };


    // coldDataSize Field Functions 
    bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
    void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSize & coldDataSize() const { DARABONBA_PTR_GET_CONST(coldDataSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSize) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSize coldDataSize() { DARABONBA_PTR_GET(coldDataSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setColdDataSize(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSize & coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setColdDataSize(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSize && coldDataSize) { DARABONBA_PTR_SET_RVALUE(coldDataSize_, coldDataSize) };


    // coldDataSizeDayGrowthRatio Field Functions 
    bool hasColdDataSizeDayGrowthRatio() const { return this->coldDataSizeDayGrowthRatio_ != nullptr;};
    void deleteColdDataSizeDayGrowthRatio() { this->coldDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(coldDataSizeDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSizeDayGrowthRatio coldDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(coldDataSizeDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSizeDayGrowthRatio && coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };


    // emptyFileCount Field Functions 
    bool hasEmptyFileCount() const { return this->emptyFileCount_ != nullptr;};
    void deleteEmptyFileCount() { this->emptyFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCount & emptyFileCount() const { DARABONBA_PTR_GET_CONST(emptyFileCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCount emptyFileCount() { DARABONBA_PTR_GET(emptyFileCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setEmptyFileCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCount & emptyFileCount) { DARABONBA_PTR_SET_VALUE(emptyFileCount_, emptyFileCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setEmptyFileCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCount && emptyFileCount) { DARABONBA_PTR_SET_RVALUE(emptyFileCount_, emptyFileCount) };


    // emptyFileCountDayGrowthRatio Field Functions 
    bool hasEmptyFileCountDayGrowthRatio() const { return this->emptyFileCountDayGrowthRatio_ != nullptr;};
    void deleteEmptyFileCountDayGrowthRatio() { this->emptyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(emptyFileCountDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCountDayGrowthRatio emptyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(emptyFileCountDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCountDayGrowthRatio && emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };


    // emptyFileDayGrowthCount Field Functions 
    bool hasEmptyFileDayGrowthCount() const { return this->emptyFileDayGrowthCount_ != nullptr;};
    void deleteEmptyFileDayGrowthCount() { this->emptyFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(emptyFileDayGrowthCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileDayGrowthCount emptyFileDayGrowthCount() { DARABONBA_PTR_GET(emptyFileDayGrowthCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setEmptyFileDayGrowthCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setEmptyFileDayGrowthCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileDayGrowthCount && emptyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };


    // emptyFileRatio Field Functions 
    bool hasEmptyFileRatio() const { return this->emptyFileRatio_ != nullptr;};
    void deleteEmptyFileRatio() { this->emptyFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileRatio & emptyFileRatio() const { DARABONBA_PTR_GET_CONST(emptyFileRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileRatio emptyFileRatio() { DARABONBA_PTR_GET(emptyFileRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setEmptyFileRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileRatio & emptyFileRatio) { DARABONBA_PTR_SET_VALUE(emptyFileRatio_, emptyFileRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setEmptyFileRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileRatio && emptyFileRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileRatio_, emptyFileRatio) };


    // freezeDataDayGrowthSize Field Functions 
    bool hasFreezeDataDayGrowthSize() const { return this->freezeDataDayGrowthSize_ != nullptr;};
    void deleteFreezeDataDayGrowthSize() { this->freezeDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(freezeDataDayGrowthSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataDayGrowthSize freezeDataDayGrowthSize() { DARABONBA_PTR_GET(freezeDataDayGrowthSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setFreezeDataDayGrowthSize(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setFreezeDataDayGrowthSize(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataDayGrowthSize && freezeDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };


    // freezeDataRatio Field Functions 
    bool hasFreezeDataRatio() const { return this->freezeDataRatio_ != nullptr;};
    void deleteFreezeDataRatio() { this->freezeDataRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataRatio & freezeDataRatio() const { DARABONBA_PTR_GET_CONST(freezeDataRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataRatio freezeDataRatio() { DARABONBA_PTR_GET(freezeDataRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setFreezeDataRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataRatio & freezeDataRatio) { DARABONBA_PTR_SET_VALUE(freezeDataRatio_, freezeDataRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setFreezeDataRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataRatio && freezeDataRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataRatio_, freezeDataRatio) };


    // freezeDataSize Field Functions 
    bool hasFreezeDataSize() const { return this->freezeDataSize_ != nullptr;};
    void deleteFreezeDataSize() { this->freezeDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSize & freezeDataSize() const { DARABONBA_PTR_GET_CONST(freezeDataSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSize) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSize freezeDataSize() { DARABONBA_PTR_GET(freezeDataSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setFreezeDataSize(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSize & freezeDataSize) { DARABONBA_PTR_SET_VALUE(freezeDataSize_, freezeDataSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setFreezeDataSize(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSize && freezeDataSize) { DARABONBA_PTR_SET_RVALUE(freezeDataSize_, freezeDataSize) };


    // freezeDataSizeDayGrowthRatio Field Functions 
    bool hasFreezeDataSizeDayGrowthRatio() const { return this->freezeDataSizeDayGrowthRatio_ != nullptr;};
    void deleteFreezeDataSizeDayGrowthRatio() { this->freezeDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(freezeDataSizeDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio freezeDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(freezeDataSizeDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio && freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };


    // hotDataDayGrowthSize Field Functions 
    bool hasHotDataDayGrowthSize() const { return this->hotDataDayGrowthSize_ != nullptr;};
    void deleteHotDataDayGrowthSize() { this->hotDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(hotDataDayGrowthSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataDayGrowthSize hotDataDayGrowthSize() { DARABONBA_PTR_GET(hotDataDayGrowthSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setHotDataDayGrowthSize(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setHotDataDayGrowthSize(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataDayGrowthSize && hotDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };


    // hotDataRatio Field Functions 
    bool hasHotDataRatio() const { return this->hotDataRatio_ != nullptr;};
    void deleteHotDataRatio() { this->hotDataRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataRatio & hotDataRatio() const { DARABONBA_PTR_GET_CONST(hotDataRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataRatio hotDataRatio() { DARABONBA_PTR_GET(hotDataRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setHotDataRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataRatio & hotDataRatio) { DARABONBA_PTR_SET_VALUE(hotDataRatio_, hotDataRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setHotDataRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataRatio && hotDataRatio) { DARABONBA_PTR_SET_RVALUE(hotDataRatio_, hotDataRatio) };


    // hotDataSize Field Functions 
    bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
    void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSize & hotDataSize() const { DARABONBA_PTR_GET_CONST(hotDataSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSize) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSize hotDataSize() { DARABONBA_PTR_GET(hotDataSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setHotDataSize(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSize & hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setHotDataSize(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSize && hotDataSize) { DARABONBA_PTR_SET_RVALUE(hotDataSize_, hotDataSize) };


    // hotDataSizeDayGrowthRatio Field Functions 
    bool hasHotDataSizeDayGrowthRatio() const { return this->hotDataSizeDayGrowthRatio_ != nullptr;};
    void deleteHotDataSizeDayGrowthRatio() { this->hotDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(hotDataSizeDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSizeDayGrowthRatio hotDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(hotDataSizeDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSizeDayGrowthRatio && hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };


    // largeFileCount Field Functions 
    bool hasLargeFileCount() const { return this->largeFileCount_ != nullptr;};
    void deleteLargeFileCount() { this->largeFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCount & largeFileCount() const { DARABONBA_PTR_GET_CONST(largeFileCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCount largeFileCount() { DARABONBA_PTR_GET(largeFileCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setLargeFileCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCount & largeFileCount) { DARABONBA_PTR_SET_VALUE(largeFileCount_, largeFileCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setLargeFileCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCount && largeFileCount) { DARABONBA_PTR_SET_RVALUE(largeFileCount_, largeFileCount) };


    // largeFileCountDayGrowthRatio Field Functions 
    bool hasLargeFileCountDayGrowthRatio() const { return this->largeFileCountDayGrowthRatio_ != nullptr;};
    void deleteLargeFileCountDayGrowthRatio() { this->largeFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(largeFileCountDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCountDayGrowthRatio largeFileCountDayGrowthRatio() { DARABONBA_PTR_GET(largeFileCountDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCountDayGrowthRatio && largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };


    // largeFileDayGrowthCount Field Functions 
    bool hasLargeFileDayGrowthCount() const { return this->largeFileDayGrowthCount_ != nullptr;};
    void deleteLargeFileDayGrowthCount() { this->largeFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(largeFileDayGrowthCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileDayGrowthCount largeFileDayGrowthCount() { DARABONBA_PTR_GET(largeFileDayGrowthCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setLargeFileDayGrowthCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setLargeFileDayGrowthCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileDayGrowthCount && largeFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };


    // largeFileRatio Field Functions 
    bool hasLargeFileRatio() const { return this->largeFileRatio_ != nullptr;};
    void deleteLargeFileRatio() { this->largeFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileRatio & largeFileRatio() const { DARABONBA_PTR_GET_CONST(largeFileRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileRatio largeFileRatio() { DARABONBA_PTR_GET(largeFileRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setLargeFileRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileRatio & largeFileRatio) { DARABONBA_PTR_SET_VALUE(largeFileRatio_, largeFileRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setLargeFileRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileRatio && largeFileRatio) { DARABONBA_PTR_SET_RVALUE(largeFileRatio_, largeFileRatio) };


    // mediumFileCount Field Functions 
    bool hasMediumFileCount() const { return this->mediumFileCount_ != nullptr;};
    void deleteMediumFileCount() { this->mediumFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCount & mediumFileCount() const { DARABONBA_PTR_GET_CONST(mediumFileCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCount mediumFileCount() { DARABONBA_PTR_GET(mediumFileCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setMediumFileCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCount & mediumFileCount) { DARABONBA_PTR_SET_VALUE(mediumFileCount_, mediumFileCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setMediumFileCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCount && mediumFileCount) { DARABONBA_PTR_SET_RVALUE(mediumFileCount_, mediumFileCount) };


    // mediumFileCountDayGrowthRatio Field Functions 
    bool hasMediumFileCountDayGrowthRatio() const { return this->mediumFileCountDayGrowthRatio_ != nullptr;};
    void deleteMediumFileCountDayGrowthRatio() { this->mediumFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(mediumFileCountDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCountDayGrowthRatio mediumFileCountDayGrowthRatio() { DARABONBA_PTR_GET(mediumFileCountDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCountDayGrowthRatio && mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };


    // mediumFileDayGrowthCount Field Functions 
    bool hasMediumFileDayGrowthCount() const { return this->mediumFileDayGrowthCount_ != nullptr;};
    void deleteMediumFileDayGrowthCount() { this->mediumFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(mediumFileDayGrowthCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileDayGrowthCount mediumFileDayGrowthCount() { DARABONBA_PTR_GET(mediumFileDayGrowthCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setMediumFileDayGrowthCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setMediumFileDayGrowthCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileDayGrowthCount && mediumFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };


    // mediumFileRatio Field Functions 
    bool hasMediumFileRatio() const { return this->mediumFileRatio_ != nullptr;};
    void deleteMediumFileRatio() { this->mediumFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileRatio & mediumFileRatio() const { DARABONBA_PTR_GET_CONST(mediumFileRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileRatio mediumFileRatio() { DARABONBA_PTR_GET(mediumFileRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setMediumFileRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileRatio & mediumFileRatio) { DARABONBA_PTR_SET_VALUE(mediumFileRatio_, mediumFileRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setMediumFileRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileRatio && mediumFileRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileRatio_, mediumFileRatio) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsPartitionNum & partitionNum() const { DARABONBA_PTR_GET_CONST(partitionNum_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsPartitionNum) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsPartitionNum partitionNum() { DARABONBA_PTR_GET(partitionNum_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsPartitionNum) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setPartitionNum(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsPartitionNum & partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setPartitionNum(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsPartitionNum && partitionNum) { DARABONBA_PTR_SET_RVALUE(partitionNum_, partitionNum) };


    // smallFileCount Field Functions 
    bool hasSmallFileCount() const { return this->smallFileCount_ != nullptr;};
    void deleteSmallFileCount() { this->smallFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCount & smallFileCount() const { DARABONBA_PTR_GET_CONST(smallFileCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCount smallFileCount() { DARABONBA_PTR_GET(smallFileCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setSmallFileCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCount & smallFileCount) { DARABONBA_PTR_SET_VALUE(smallFileCount_, smallFileCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setSmallFileCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCount && smallFileCount) { DARABONBA_PTR_SET_RVALUE(smallFileCount_, smallFileCount) };


    // smallFileCountDayGrowthRatio Field Functions 
    bool hasSmallFileCountDayGrowthRatio() const { return this->smallFileCountDayGrowthRatio_ != nullptr;};
    void deleteSmallFileCountDayGrowthRatio() { this->smallFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(smallFileCountDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCountDayGrowthRatio smallFileCountDayGrowthRatio() { DARABONBA_PTR_GET(smallFileCountDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCountDayGrowthRatio && smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };


    // smallFileDayGrowthCount Field Functions 
    bool hasSmallFileDayGrowthCount() const { return this->smallFileDayGrowthCount_ != nullptr;};
    void deleteSmallFileDayGrowthCount() { this->smallFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(smallFileDayGrowthCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileDayGrowthCount smallFileDayGrowthCount() { DARABONBA_PTR_GET(smallFileDayGrowthCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setSmallFileDayGrowthCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setSmallFileDayGrowthCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileDayGrowthCount && smallFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };


    // smallFileRatio Field Functions 
    bool hasSmallFileRatio() const { return this->smallFileRatio_ != nullptr;};
    void deleteSmallFileRatio() { this->smallFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileRatio & smallFileRatio() const { DARABONBA_PTR_GET_CONST(smallFileRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileRatio smallFileRatio() { DARABONBA_PTR_GET(smallFileRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setSmallFileRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileRatio & smallFileRatio) { DARABONBA_PTR_SET_VALUE(smallFileRatio_, smallFileRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setSmallFileRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileRatio && smallFileRatio) { DARABONBA_PTR_SET_RVALUE(smallFileRatio_, smallFileRatio) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTableCount & tableCount() const { DARABONBA_PTR_GET_CONST(tableCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTableCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTableCount tableCount() { DARABONBA_PTR_GET(tableCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTableCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTableCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTableCount & tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTableCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTableCount && tableCount) { DARABONBA_PTR_SET_RVALUE(tableCount_, tableCount) };


    // tinyFileCount Field Functions 
    bool hasTinyFileCount() const { return this->tinyFileCount_ != nullptr;};
    void deleteTinyFileCount() { this->tinyFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCount & tinyFileCount() const { DARABONBA_PTR_GET_CONST(tinyFileCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCount tinyFileCount() { DARABONBA_PTR_GET(tinyFileCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTinyFileCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCount & tinyFileCount) { DARABONBA_PTR_SET_VALUE(tinyFileCount_, tinyFileCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTinyFileCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCount && tinyFileCount) { DARABONBA_PTR_SET_RVALUE(tinyFileCount_, tinyFileCount) };


    // tinyFileCountDayGrowthRatio Field Functions 
    bool hasTinyFileCountDayGrowthRatio() const { return this->tinyFileCountDayGrowthRatio_ != nullptr;};
    void deleteTinyFileCountDayGrowthRatio() { this->tinyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(tinyFileCountDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCountDayGrowthRatio tinyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(tinyFileCountDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCountDayGrowthRatio && tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };


    // tinyFileDayGrowthCount Field Functions 
    bool hasTinyFileDayGrowthCount() const { return this->tinyFileDayGrowthCount_ != nullptr;};
    void deleteTinyFileDayGrowthCount() { this->tinyFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(tinyFileDayGrowthCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileDayGrowthCount tinyFileDayGrowthCount() { DARABONBA_PTR_GET(tinyFileDayGrowthCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTinyFileDayGrowthCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTinyFileDayGrowthCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileDayGrowthCount && tinyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };


    // tinyFileRatio Field Functions 
    bool hasTinyFileRatio() const { return this->tinyFileRatio_ != nullptr;};
    void deleteTinyFileRatio() { this->tinyFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileRatio & tinyFileRatio() const { DARABONBA_PTR_GET_CONST(tinyFileRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileRatio tinyFileRatio() { DARABONBA_PTR_GET(tinyFileRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTinyFileRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileRatio & tinyFileRatio) { DARABONBA_PTR_SET_VALUE(tinyFileRatio_, tinyFileRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTinyFileRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileRatio && tinyFileRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileRatio_, tinyFileRatio) };


    // totalDataDayGrowthSize Field Functions 
    bool hasTotalDataDayGrowthSize() const { return this->totalDataDayGrowthSize_ != nullptr;};
    void deleteTotalDataDayGrowthSize() { this->totalDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(totalDataDayGrowthSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataDayGrowthSize totalDataDayGrowthSize() { DARABONBA_PTR_GET(totalDataDayGrowthSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTotalDataDayGrowthSize(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTotalDataDayGrowthSize(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataDayGrowthSize && totalDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };


    // totalDataSize Field Functions 
    bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
    void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSize & totalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSize) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSize totalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTotalDataSize(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTotalDataSize(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


    // totalDataSizeDayGrowthRatio Field Functions 
    bool hasTotalDataSizeDayGrowthRatio() const { return this->totalDataSizeDayGrowthRatio_ != nullptr;};
    void deleteTotalDataSizeDayGrowthRatio() { this->totalDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalDataSizeDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSizeDayGrowthRatio totalDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(totalDataSizeDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSizeDayGrowthRatio && totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCount & totalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCount totalFileCount() { DARABONBA_PTR_GET(totalFileCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTotalFileCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCount & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTotalFileCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCount && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


    // totalFileCountDayGrowthRatio Field Functions 
    bool hasTotalFileCountDayGrowthRatio() const { return this->totalFileCountDayGrowthRatio_ != nullptr;};
    void deleteTotalFileCountDayGrowthRatio() { this->totalFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalFileCountDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCountDayGrowthRatio totalFileCountDayGrowthRatio() { DARABONBA_PTR_GET(totalFileCountDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCountDayGrowthRatio && totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };


    // totalFileDayGrowthCount Field Functions 
    bool hasTotalFileDayGrowthCount() const { return this->totalFileDayGrowthCount_ != nullptr;};
    void deleteTotalFileDayGrowthCount() { this->totalFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(totalFileDayGrowthCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileDayGrowthCount totalFileDayGrowthCount() { DARABONBA_PTR_GET(totalFileDayGrowthCount_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTotalFileDayGrowthCount(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setTotalFileDayGrowthCount(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileDayGrowthCount && totalFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };


    // warmDataDayGrowthSize Field Functions 
    bool hasWarmDataDayGrowthSize() const { return this->warmDataDayGrowthSize_ != nullptr;};
    void deleteWarmDataDayGrowthSize() { this->warmDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(warmDataDayGrowthSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataDayGrowthSize warmDataDayGrowthSize() { DARABONBA_PTR_GET(warmDataDayGrowthSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setWarmDataDayGrowthSize(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setWarmDataDayGrowthSize(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataDayGrowthSize && warmDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };


    // warmDataRatio Field Functions 
    bool hasWarmDataRatio() const { return this->warmDataRatio_ != nullptr;};
    void deleteWarmDataRatio() { this->warmDataRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataRatio & warmDataRatio() const { DARABONBA_PTR_GET_CONST(warmDataRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataRatio warmDataRatio() { DARABONBA_PTR_GET(warmDataRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setWarmDataRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataRatio & warmDataRatio) { DARABONBA_PTR_SET_VALUE(warmDataRatio_, warmDataRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setWarmDataRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataRatio && warmDataRatio) { DARABONBA_PTR_SET_RVALUE(warmDataRatio_, warmDataRatio) };


    // warmDataSize Field Functions 
    bool hasWarmDataSize() const { return this->warmDataSize_ != nullptr;};
    void deleteWarmDataSize() { this->warmDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSize & warmDataSize() const { DARABONBA_PTR_GET_CONST(warmDataSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSize) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSize warmDataSize() { DARABONBA_PTR_GET(warmDataSize_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setWarmDataSize(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSize & warmDataSize) { DARABONBA_PTR_SET_VALUE(warmDataSize_, warmDataSize) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setWarmDataSize(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSize && warmDataSize) { DARABONBA_PTR_SET_RVALUE(warmDataSize_, warmDataSize) };


    // warmDataSizeDayGrowthRatio Field Functions 
    bool hasWarmDataSizeDayGrowthRatio() const { return this->warmDataSizeDayGrowthRatio_ != nullptr;};
    void deleteWarmDataSizeDayGrowthRatio() { this->warmDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(warmDataSizeDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSizeDayGrowthRatio warmDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(warmDataSizeDayGrowthRatio_, Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(const Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };
    inline GetDoctorHiveDatabaseResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSizeDayGrowthRatio && warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };


  protected:
    // The daily increment of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataDayGrowthSize> coldDataDayGrowthSize_ = nullptr;
    // The proportion of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataRatio> coldDataRatio_ = nullptr;
    // The amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSize> coldDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsColdDataSizeDayGrowthRatio> coldDataSizeDayGrowthRatio_ = nullptr;
    // The number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCount> emptyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileCountDayGrowthRatio> emptyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileDayGrowthCount> emptyFileDayGrowthCount_ = nullptr;
    // The proportion of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsEmptyFileRatio> emptyFileRatio_ = nullptr;
    // The daily increment of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataDayGrowthSize> freezeDataDayGrowthSize_ = nullptr;
    // The proportion of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataRatio> freezeDataRatio_ = nullptr;
    // The amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSize> freezeDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio> freezeDataSizeDayGrowthRatio_ = nullptr;
    // The daily increment of the amount of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataDayGrowthSize> hotDataDayGrowthSize_ = nullptr;
    // The proportion of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataRatio> hotDataRatio_ = nullptr;
    // The amount of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSize> hotDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsHotDataSizeDayGrowthRatio> hotDataSizeDayGrowthRatio_ = nullptr;
    // The number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCount> largeFileCount_ = nullptr;
    // The day-to-day growth rate of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileCountDayGrowthRatio> largeFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileDayGrowthCount> largeFileDayGrowthCount_ = nullptr;
    // The proportion of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsLargeFileRatio> largeFileRatio_ = nullptr;
    // The number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCount> mediumFileCount_ = nullptr;
    // The day-to-day growth rate of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileCountDayGrowthRatio> mediumFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileDayGrowthCount> mediumFileDayGrowthCount_ = nullptr;
    // The proportion of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsMediumFileRatio> mediumFileRatio_ = nullptr;
    // The number of partitions.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsPartitionNum> partitionNum_ = nullptr;
    // The number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCount> smallFileCount_ = nullptr;
    // The day-to-day growth rate of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileCountDayGrowthRatio> smallFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileDayGrowthCount> smallFileDayGrowthCount_ = nullptr;
    // The proportion of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsSmallFileRatio> smallFileRatio_ = nullptr;
    // The number of tables.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTableCount> tableCount_ = nullptr;
    // The number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCount> tinyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileCountDayGrowthRatio> tinyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileDayGrowthCount> tinyFileDayGrowthCount_ = nullptr;
    // The proportion of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTinyFileRatio> tinyFileRatio_ = nullptr;
    // The daily incremental of the total amount of data.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataDayGrowthSize> totalDataDayGrowthSize_ = nullptr;
    // The total amount of data.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSize> totalDataSize_ = nullptr;
    // The day-to-day growth rate of the total data volume.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalDataSizeDayGrowthRatio> totalDataSizeDayGrowthRatio_ = nullptr;
    // The total number of files.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCount> totalFileCount_ = nullptr;
    // The day-to-day growth rate of the total number of files.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileCountDayGrowthRatio> totalFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the total number of files.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsTotalFileDayGrowthCount> totalFileDayGrowthCount_ = nullptr;
    // The daily increment of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataDayGrowthSize> warmDataDayGrowthSize_ = nullptr;
    // The proportion of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataRatio> warmDataRatio_ = nullptr;
    // The amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSize> warmDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::GetDoctorHiveDatabaseResponseBodyDataMetricsWarmDataSizeDayGrowthRatio> warmDataSizeDayGrowthRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
