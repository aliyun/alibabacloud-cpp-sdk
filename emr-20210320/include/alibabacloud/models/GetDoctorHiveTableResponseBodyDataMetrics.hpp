// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHIVETABLERESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHIVETABLERESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsColdDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsColdDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsColdDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsColdDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsEmptyFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsEmptyFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsFreezeDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsFreezeDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsHotDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsHotDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsHotDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsHotDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsLargeFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsLargeFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsLargeFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsLargeFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsMediumFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsMediumFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsMediumFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsMediumFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsPartitionNum.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsSmallFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsSmallFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsSmallFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsSmallFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsTinyFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsTinyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsTinyFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsTinyFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsTotalDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsTotalDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsTotalDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsTotalFileCount.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsTotalFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsTotalFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsWarmDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsWarmDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsWarmDataSize.hpp>
#include <alibabacloud/models/GetDoctorHiveTableResponseBodyDataMetricsWarmDataSizeDayGrowthRatio.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHiveTableResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHiveTableResponseBodyDataMetrics& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetDoctorHiveTableResponseBodyDataMetrics& obj) { 
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
    GetDoctorHiveTableResponseBodyDataMetrics() = default ;
    GetDoctorHiveTableResponseBodyDataMetrics(const GetDoctorHiveTableResponseBodyDataMetrics &) = default ;
    GetDoctorHiveTableResponseBodyDataMetrics(GetDoctorHiveTableResponseBodyDataMetrics &&) = default ;
    GetDoctorHiveTableResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHiveTableResponseBodyDataMetrics() = default ;
    GetDoctorHiveTableResponseBodyDataMetrics& operator=(const GetDoctorHiveTableResponseBodyDataMetrics &) = default ;
    GetDoctorHiveTableResponseBodyDataMetrics& operator=(GetDoctorHiveTableResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coldDataDayGrowthSize_ != nullptr
        && this->coldDataRatio_ != nullptr && this->coldDataSize_ != nullptr && this->coldDataSizeDayGrowthRatio_ != nullptr && this->emptyFileCount_ != nullptr && this->emptyFileCountDayGrowthRatio_ != nullptr
        && this->emptyFileDayGrowthCount_ != nullptr && this->emptyFileRatio_ != nullptr && this->freezeDataDayGrowthSize_ != nullptr && this->freezeDataRatio_ != nullptr && this->freezeDataSize_ != nullptr
        && this->freezeDataSizeDayGrowthRatio_ != nullptr && this->hotDataDayGrowthSize_ != nullptr && this->hotDataRatio_ != nullptr && this->hotDataSize_ != nullptr && this->hotDataSizeDayGrowthRatio_ != nullptr
        && this->largeFileCount_ != nullptr && this->largeFileCountDayGrowthRatio_ != nullptr && this->largeFileDayGrowthCount_ != nullptr && this->largeFileRatio_ != nullptr && this->mediumFileCount_ != nullptr
        && this->mediumFileCountDayGrowthRatio_ != nullptr && this->mediumFileDayGrowthCount_ != nullptr && this->mediumFileRatio_ != nullptr && this->partitionNum_ != nullptr && this->smallFileCount_ != nullptr
        && this->smallFileCountDayGrowthRatio_ != nullptr && this->smallFileDayGrowthCount_ != nullptr && this->smallFileRatio_ != nullptr && this->tinyFileCount_ != nullptr && this->tinyFileCountDayGrowthRatio_ != nullptr
        && this->tinyFileDayGrowthCount_ != nullptr && this->tinyFileRatio_ != nullptr && this->totalDataDayGrowthSize_ != nullptr && this->totalDataSize_ != nullptr && this->totalDataSizeDayGrowthRatio_ != nullptr
        && this->totalFileCount_ != nullptr && this->totalFileCountDayGrowthRatio_ != nullptr && this->totalFileDayGrowthCount_ != nullptr && this->warmDataDayGrowthSize_ != nullptr && this->warmDataRatio_ != nullptr
        && this->warmDataSize_ != nullptr && this->warmDataSizeDayGrowthRatio_ != nullptr; };
    // coldDataDayGrowthSize Field Functions 
    bool hasColdDataDayGrowthSize() const { return this->coldDataDayGrowthSize_ != nullptr;};
    void deleteColdDataDayGrowthSize() { this->coldDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(coldDataDayGrowthSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataDayGrowthSize coldDataDayGrowthSize() { DARABONBA_PTR_GET(coldDataDayGrowthSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setColdDataDayGrowthSize(const Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setColdDataDayGrowthSize(Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataDayGrowthSize && coldDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };


    // coldDataRatio Field Functions 
    bool hasColdDataRatio() const { return this->coldDataRatio_ != nullptr;};
    void deleteColdDataRatio() { this->coldDataRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataRatio & coldDataRatio() const { DARABONBA_PTR_GET_CONST(coldDataRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataRatio coldDataRatio() { DARABONBA_PTR_GET(coldDataRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setColdDataRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataRatio & coldDataRatio) { DARABONBA_PTR_SET_VALUE(coldDataRatio_, coldDataRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setColdDataRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataRatio && coldDataRatio) { DARABONBA_PTR_SET_RVALUE(coldDataRatio_, coldDataRatio) };


    // coldDataSize Field Functions 
    bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
    void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSize & coldDataSize() const { DARABONBA_PTR_GET_CONST(coldDataSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSize) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSize coldDataSize() { DARABONBA_PTR_GET(coldDataSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setColdDataSize(const Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSize & coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setColdDataSize(Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSize && coldDataSize) { DARABONBA_PTR_SET_RVALUE(coldDataSize_, coldDataSize) };


    // coldDataSizeDayGrowthRatio Field Functions 
    bool hasColdDataSizeDayGrowthRatio() const { return this->coldDataSizeDayGrowthRatio_ != nullptr;};
    void deleteColdDataSizeDayGrowthRatio() { this->coldDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(coldDataSizeDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSizeDayGrowthRatio coldDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(coldDataSizeDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSizeDayGrowthRatio && coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };


    // emptyFileCount Field Functions 
    bool hasEmptyFileCount() const { return this->emptyFileCount_ != nullptr;};
    void deleteEmptyFileCount() { this->emptyFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCount & emptyFileCount() const { DARABONBA_PTR_GET_CONST(emptyFileCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCount) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCount emptyFileCount() { DARABONBA_PTR_GET(emptyFileCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setEmptyFileCount(const Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCount & emptyFileCount) { DARABONBA_PTR_SET_VALUE(emptyFileCount_, emptyFileCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setEmptyFileCount(Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCount && emptyFileCount) { DARABONBA_PTR_SET_RVALUE(emptyFileCount_, emptyFileCount) };


    // emptyFileCountDayGrowthRatio Field Functions 
    bool hasEmptyFileCountDayGrowthRatio() const { return this->emptyFileCountDayGrowthRatio_ != nullptr;};
    void deleteEmptyFileCountDayGrowthRatio() { this->emptyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(emptyFileCountDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCountDayGrowthRatio emptyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(emptyFileCountDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCountDayGrowthRatio && emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };


    // emptyFileDayGrowthCount Field Functions 
    bool hasEmptyFileDayGrowthCount() const { return this->emptyFileDayGrowthCount_ != nullptr;};
    void deleteEmptyFileDayGrowthCount() { this->emptyFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(emptyFileDayGrowthCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileDayGrowthCount emptyFileDayGrowthCount() { DARABONBA_PTR_GET(emptyFileDayGrowthCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setEmptyFileDayGrowthCount(const Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setEmptyFileDayGrowthCount(Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileDayGrowthCount && emptyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };


    // emptyFileRatio Field Functions 
    bool hasEmptyFileRatio() const { return this->emptyFileRatio_ != nullptr;};
    void deleteEmptyFileRatio() { this->emptyFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileRatio & emptyFileRatio() const { DARABONBA_PTR_GET_CONST(emptyFileRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileRatio emptyFileRatio() { DARABONBA_PTR_GET(emptyFileRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setEmptyFileRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileRatio & emptyFileRatio) { DARABONBA_PTR_SET_VALUE(emptyFileRatio_, emptyFileRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setEmptyFileRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileRatio && emptyFileRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileRatio_, emptyFileRatio) };


    // freezeDataDayGrowthSize Field Functions 
    bool hasFreezeDataDayGrowthSize() const { return this->freezeDataDayGrowthSize_ != nullptr;};
    void deleteFreezeDataDayGrowthSize() { this->freezeDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(freezeDataDayGrowthSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataDayGrowthSize freezeDataDayGrowthSize() { DARABONBA_PTR_GET(freezeDataDayGrowthSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setFreezeDataDayGrowthSize(const Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setFreezeDataDayGrowthSize(Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataDayGrowthSize && freezeDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };


    // freezeDataRatio Field Functions 
    bool hasFreezeDataRatio() const { return this->freezeDataRatio_ != nullptr;};
    void deleteFreezeDataRatio() { this->freezeDataRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataRatio & freezeDataRatio() const { DARABONBA_PTR_GET_CONST(freezeDataRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataRatio freezeDataRatio() { DARABONBA_PTR_GET(freezeDataRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setFreezeDataRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataRatio & freezeDataRatio) { DARABONBA_PTR_SET_VALUE(freezeDataRatio_, freezeDataRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setFreezeDataRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataRatio && freezeDataRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataRatio_, freezeDataRatio) };


    // freezeDataSize Field Functions 
    bool hasFreezeDataSize() const { return this->freezeDataSize_ != nullptr;};
    void deleteFreezeDataSize() { this->freezeDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSize & freezeDataSize() const { DARABONBA_PTR_GET_CONST(freezeDataSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSize) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSize freezeDataSize() { DARABONBA_PTR_GET(freezeDataSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setFreezeDataSize(const Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSize & freezeDataSize) { DARABONBA_PTR_SET_VALUE(freezeDataSize_, freezeDataSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setFreezeDataSize(Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSize && freezeDataSize) { DARABONBA_PTR_SET_RVALUE(freezeDataSize_, freezeDataSize) };


    // freezeDataSizeDayGrowthRatio Field Functions 
    bool hasFreezeDataSizeDayGrowthRatio() const { return this->freezeDataSizeDayGrowthRatio_ != nullptr;};
    void deleteFreezeDataSizeDayGrowthRatio() { this->freezeDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(freezeDataSizeDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio freezeDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(freezeDataSizeDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio && freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };


    // hotDataDayGrowthSize Field Functions 
    bool hasHotDataDayGrowthSize() const { return this->hotDataDayGrowthSize_ != nullptr;};
    void deleteHotDataDayGrowthSize() { this->hotDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(hotDataDayGrowthSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataDayGrowthSize hotDataDayGrowthSize() { DARABONBA_PTR_GET(hotDataDayGrowthSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setHotDataDayGrowthSize(const Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setHotDataDayGrowthSize(Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataDayGrowthSize && hotDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };


    // hotDataRatio Field Functions 
    bool hasHotDataRatio() const { return this->hotDataRatio_ != nullptr;};
    void deleteHotDataRatio() { this->hotDataRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataRatio & hotDataRatio() const { DARABONBA_PTR_GET_CONST(hotDataRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataRatio hotDataRatio() { DARABONBA_PTR_GET(hotDataRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setHotDataRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataRatio & hotDataRatio) { DARABONBA_PTR_SET_VALUE(hotDataRatio_, hotDataRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setHotDataRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataRatio && hotDataRatio) { DARABONBA_PTR_SET_RVALUE(hotDataRatio_, hotDataRatio) };


    // hotDataSize Field Functions 
    bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
    void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSize & hotDataSize() const { DARABONBA_PTR_GET_CONST(hotDataSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSize) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSize hotDataSize() { DARABONBA_PTR_GET(hotDataSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setHotDataSize(const Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSize & hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setHotDataSize(Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSize && hotDataSize) { DARABONBA_PTR_SET_RVALUE(hotDataSize_, hotDataSize) };


    // hotDataSizeDayGrowthRatio Field Functions 
    bool hasHotDataSizeDayGrowthRatio() const { return this->hotDataSizeDayGrowthRatio_ != nullptr;};
    void deleteHotDataSizeDayGrowthRatio() { this->hotDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(hotDataSizeDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSizeDayGrowthRatio hotDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(hotDataSizeDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSizeDayGrowthRatio && hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };


    // largeFileCount Field Functions 
    bool hasLargeFileCount() const { return this->largeFileCount_ != nullptr;};
    void deleteLargeFileCount() { this->largeFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCount & largeFileCount() const { DARABONBA_PTR_GET_CONST(largeFileCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCount) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCount largeFileCount() { DARABONBA_PTR_GET(largeFileCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setLargeFileCount(const Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCount & largeFileCount) { DARABONBA_PTR_SET_VALUE(largeFileCount_, largeFileCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setLargeFileCount(Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCount && largeFileCount) { DARABONBA_PTR_SET_RVALUE(largeFileCount_, largeFileCount) };


    // largeFileCountDayGrowthRatio Field Functions 
    bool hasLargeFileCountDayGrowthRatio() const { return this->largeFileCountDayGrowthRatio_ != nullptr;};
    void deleteLargeFileCountDayGrowthRatio() { this->largeFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(largeFileCountDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCountDayGrowthRatio largeFileCountDayGrowthRatio() { DARABONBA_PTR_GET(largeFileCountDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCountDayGrowthRatio && largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };


    // largeFileDayGrowthCount Field Functions 
    bool hasLargeFileDayGrowthCount() const { return this->largeFileDayGrowthCount_ != nullptr;};
    void deleteLargeFileDayGrowthCount() { this->largeFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(largeFileDayGrowthCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileDayGrowthCount largeFileDayGrowthCount() { DARABONBA_PTR_GET(largeFileDayGrowthCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setLargeFileDayGrowthCount(const Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setLargeFileDayGrowthCount(Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileDayGrowthCount && largeFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };


    // largeFileRatio Field Functions 
    bool hasLargeFileRatio() const { return this->largeFileRatio_ != nullptr;};
    void deleteLargeFileRatio() { this->largeFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileRatio & largeFileRatio() const { DARABONBA_PTR_GET_CONST(largeFileRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileRatio largeFileRatio() { DARABONBA_PTR_GET(largeFileRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setLargeFileRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileRatio & largeFileRatio) { DARABONBA_PTR_SET_VALUE(largeFileRatio_, largeFileRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setLargeFileRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileRatio && largeFileRatio) { DARABONBA_PTR_SET_RVALUE(largeFileRatio_, largeFileRatio) };


    // mediumFileCount Field Functions 
    bool hasMediumFileCount() const { return this->mediumFileCount_ != nullptr;};
    void deleteMediumFileCount() { this->mediumFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCount & mediumFileCount() const { DARABONBA_PTR_GET_CONST(mediumFileCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCount) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCount mediumFileCount() { DARABONBA_PTR_GET(mediumFileCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setMediumFileCount(const Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCount & mediumFileCount) { DARABONBA_PTR_SET_VALUE(mediumFileCount_, mediumFileCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setMediumFileCount(Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCount && mediumFileCount) { DARABONBA_PTR_SET_RVALUE(mediumFileCount_, mediumFileCount) };


    // mediumFileCountDayGrowthRatio Field Functions 
    bool hasMediumFileCountDayGrowthRatio() const { return this->mediumFileCountDayGrowthRatio_ != nullptr;};
    void deleteMediumFileCountDayGrowthRatio() { this->mediumFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(mediumFileCountDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCountDayGrowthRatio mediumFileCountDayGrowthRatio() { DARABONBA_PTR_GET(mediumFileCountDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCountDayGrowthRatio && mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };


    // mediumFileDayGrowthCount Field Functions 
    bool hasMediumFileDayGrowthCount() const { return this->mediumFileDayGrowthCount_ != nullptr;};
    void deleteMediumFileDayGrowthCount() { this->mediumFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(mediumFileDayGrowthCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileDayGrowthCount mediumFileDayGrowthCount() { DARABONBA_PTR_GET(mediumFileDayGrowthCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setMediumFileDayGrowthCount(const Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setMediumFileDayGrowthCount(Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileDayGrowthCount && mediumFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };


    // mediumFileRatio Field Functions 
    bool hasMediumFileRatio() const { return this->mediumFileRatio_ != nullptr;};
    void deleteMediumFileRatio() { this->mediumFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileRatio & mediumFileRatio() const { DARABONBA_PTR_GET_CONST(mediumFileRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileRatio mediumFileRatio() { DARABONBA_PTR_GET(mediumFileRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setMediumFileRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileRatio & mediumFileRatio) { DARABONBA_PTR_SET_VALUE(mediumFileRatio_, mediumFileRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setMediumFileRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileRatio && mediumFileRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileRatio_, mediumFileRatio) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsPartitionNum & partitionNum() const { DARABONBA_PTR_GET_CONST(partitionNum_, Models::GetDoctorHiveTableResponseBodyDataMetricsPartitionNum) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsPartitionNum partitionNum() { DARABONBA_PTR_GET(partitionNum_, Models::GetDoctorHiveTableResponseBodyDataMetricsPartitionNum) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setPartitionNum(const Models::GetDoctorHiveTableResponseBodyDataMetricsPartitionNum & partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setPartitionNum(Models::GetDoctorHiveTableResponseBodyDataMetricsPartitionNum && partitionNum) { DARABONBA_PTR_SET_RVALUE(partitionNum_, partitionNum) };


    // smallFileCount Field Functions 
    bool hasSmallFileCount() const { return this->smallFileCount_ != nullptr;};
    void deleteSmallFileCount() { this->smallFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCount & smallFileCount() const { DARABONBA_PTR_GET_CONST(smallFileCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCount) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCount smallFileCount() { DARABONBA_PTR_GET(smallFileCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setSmallFileCount(const Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCount & smallFileCount) { DARABONBA_PTR_SET_VALUE(smallFileCount_, smallFileCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setSmallFileCount(Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCount && smallFileCount) { DARABONBA_PTR_SET_RVALUE(smallFileCount_, smallFileCount) };


    // smallFileCountDayGrowthRatio Field Functions 
    bool hasSmallFileCountDayGrowthRatio() const { return this->smallFileCountDayGrowthRatio_ != nullptr;};
    void deleteSmallFileCountDayGrowthRatio() { this->smallFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(smallFileCountDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCountDayGrowthRatio smallFileCountDayGrowthRatio() { DARABONBA_PTR_GET(smallFileCountDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCountDayGrowthRatio && smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };


    // smallFileDayGrowthCount Field Functions 
    bool hasSmallFileDayGrowthCount() const { return this->smallFileDayGrowthCount_ != nullptr;};
    void deleteSmallFileDayGrowthCount() { this->smallFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(smallFileDayGrowthCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileDayGrowthCount smallFileDayGrowthCount() { DARABONBA_PTR_GET(smallFileDayGrowthCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setSmallFileDayGrowthCount(const Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setSmallFileDayGrowthCount(Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileDayGrowthCount && smallFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };


    // smallFileRatio Field Functions 
    bool hasSmallFileRatio() const { return this->smallFileRatio_ != nullptr;};
    void deleteSmallFileRatio() { this->smallFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileRatio & smallFileRatio() const { DARABONBA_PTR_GET_CONST(smallFileRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileRatio smallFileRatio() { DARABONBA_PTR_GET(smallFileRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setSmallFileRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileRatio & smallFileRatio) { DARABONBA_PTR_SET_VALUE(smallFileRatio_, smallFileRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setSmallFileRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileRatio && smallFileRatio) { DARABONBA_PTR_SET_RVALUE(smallFileRatio_, smallFileRatio) };


    // tinyFileCount Field Functions 
    bool hasTinyFileCount() const { return this->tinyFileCount_ != nullptr;};
    void deleteTinyFileCount() { this->tinyFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCount & tinyFileCount() const { DARABONBA_PTR_GET_CONST(tinyFileCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCount) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCount tinyFileCount() { DARABONBA_PTR_GET(tinyFileCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTinyFileCount(const Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCount & tinyFileCount) { DARABONBA_PTR_SET_VALUE(tinyFileCount_, tinyFileCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTinyFileCount(Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCount && tinyFileCount) { DARABONBA_PTR_SET_RVALUE(tinyFileCount_, tinyFileCount) };


    // tinyFileCountDayGrowthRatio Field Functions 
    bool hasTinyFileCountDayGrowthRatio() const { return this->tinyFileCountDayGrowthRatio_ != nullptr;};
    void deleteTinyFileCountDayGrowthRatio() { this->tinyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(tinyFileCountDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCountDayGrowthRatio tinyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(tinyFileCountDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCountDayGrowthRatio && tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };


    // tinyFileDayGrowthCount Field Functions 
    bool hasTinyFileDayGrowthCount() const { return this->tinyFileDayGrowthCount_ != nullptr;};
    void deleteTinyFileDayGrowthCount() { this->tinyFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(tinyFileDayGrowthCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileDayGrowthCount tinyFileDayGrowthCount() { DARABONBA_PTR_GET(tinyFileDayGrowthCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTinyFileDayGrowthCount(const Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTinyFileDayGrowthCount(Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileDayGrowthCount && tinyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };


    // tinyFileRatio Field Functions 
    bool hasTinyFileRatio() const { return this->tinyFileRatio_ != nullptr;};
    void deleteTinyFileRatio() { this->tinyFileRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileRatio & tinyFileRatio() const { DARABONBA_PTR_GET_CONST(tinyFileRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileRatio tinyFileRatio() { DARABONBA_PTR_GET(tinyFileRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTinyFileRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileRatio & tinyFileRatio) { DARABONBA_PTR_SET_VALUE(tinyFileRatio_, tinyFileRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTinyFileRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileRatio && tinyFileRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileRatio_, tinyFileRatio) };


    // totalDataDayGrowthSize Field Functions 
    bool hasTotalDataDayGrowthSize() const { return this->totalDataDayGrowthSize_ != nullptr;};
    void deleteTotalDataDayGrowthSize() { this->totalDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(totalDataDayGrowthSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataDayGrowthSize totalDataDayGrowthSize() { DARABONBA_PTR_GET(totalDataDayGrowthSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTotalDataDayGrowthSize(const Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTotalDataDayGrowthSize(Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataDayGrowthSize && totalDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };


    // totalDataSize Field Functions 
    bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
    void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSize & totalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSize) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSize totalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTotalDataSize(const Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTotalDataSize(Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


    // totalDataSizeDayGrowthRatio Field Functions 
    bool hasTotalDataSizeDayGrowthRatio() const { return this->totalDataSizeDayGrowthRatio_ != nullptr;};
    void deleteTotalDataSizeDayGrowthRatio() { this->totalDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalDataSizeDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSizeDayGrowthRatio totalDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(totalDataSizeDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSizeDayGrowthRatio && totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCount & totalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCount) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCount totalFileCount() { DARABONBA_PTR_GET(totalFileCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTotalFileCount(const Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCount & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTotalFileCount(Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCount && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


    // totalFileCountDayGrowthRatio Field Functions 
    bool hasTotalFileCountDayGrowthRatio() const { return this->totalFileCountDayGrowthRatio_ != nullptr;};
    void deleteTotalFileCountDayGrowthRatio() { this->totalFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalFileCountDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCountDayGrowthRatio totalFileCountDayGrowthRatio() { DARABONBA_PTR_GET(totalFileCountDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCountDayGrowthRatio && totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };


    // totalFileDayGrowthCount Field Functions 
    bool hasTotalFileDayGrowthCount() const { return this->totalFileDayGrowthCount_ != nullptr;};
    void deleteTotalFileDayGrowthCount() { this->totalFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(totalFileDayGrowthCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileDayGrowthCount totalFileDayGrowthCount() { DARABONBA_PTR_GET(totalFileDayGrowthCount_, Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTotalFileDayGrowthCount(const Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setTotalFileDayGrowthCount(Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileDayGrowthCount && totalFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };


    // warmDataDayGrowthSize Field Functions 
    bool hasWarmDataDayGrowthSize() const { return this->warmDataDayGrowthSize_ != nullptr;};
    void deleteWarmDataDayGrowthSize() { this->warmDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(warmDataDayGrowthSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataDayGrowthSize warmDataDayGrowthSize() { DARABONBA_PTR_GET(warmDataDayGrowthSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setWarmDataDayGrowthSize(const Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setWarmDataDayGrowthSize(Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataDayGrowthSize && warmDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };


    // warmDataRatio Field Functions 
    bool hasWarmDataRatio() const { return this->warmDataRatio_ != nullptr;};
    void deleteWarmDataRatio() { this->warmDataRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataRatio & warmDataRatio() const { DARABONBA_PTR_GET_CONST(warmDataRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataRatio warmDataRatio() { DARABONBA_PTR_GET(warmDataRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setWarmDataRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataRatio & warmDataRatio) { DARABONBA_PTR_SET_VALUE(warmDataRatio_, warmDataRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setWarmDataRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataRatio && warmDataRatio) { DARABONBA_PTR_SET_RVALUE(warmDataRatio_, warmDataRatio) };


    // warmDataSize Field Functions 
    bool hasWarmDataSize() const { return this->warmDataSize_ != nullptr;};
    void deleteWarmDataSize() { this->warmDataSize_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSize & warmDataSize() const { DARABONBA_PTR_GET_CONST(warmDataSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSize) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSize warmDataSize() { DARABONBA_PTR_GET(warmDataSize_, Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setWarmDataSize(const Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSize & warmDataSize) { DARABONBA_PTR_SET_VALUE(warmDataSize_, warmDataSize) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setWarmDataSize(Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSize && warmDataSize) { DARABONBA_PTR_SET_RVALUE(warmDataSize_, warmDataSize) };


    // warmDataSizeDayGrowthRatio Field Functions 
    bool hasWarmDataSizeDayGrowthRatio() const { return this->warmDataSizeDayGrowthRatio_ != nullptr;};
    void deleteWarmDataSizeDayGrowthRatio() { this->warmDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(warmDataSizeDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSizeDayGrowthRatio warmDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(warmDataSizeDayGrowthRatio_, Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(const Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };
    inline GetDoctorHiveTableResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSizeDayGrowthRatio && warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };


  protected:
    // The daily increment of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in 90 days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataDayGrowthSize> coldDataDayGrowthSize_ = nullptr;
    // The proportion of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in 90 days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataRatio> coldDataRatio_ = nullptr;
    // The amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in 90 days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSize> coldDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in 90 days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsColdDataSizeDayGrowthRatio> coldDataSizeDayGrowthRatio_ = nullptr;
    // The number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCount> emptyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileCountDayGrowthRatio> emptyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileDayGrowthCount> emptyFileDayGrowthCount_ = nullptr;
    // The proportion of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsEmptyFileRatio> emptyFileRatio_ = nullptr;
    // The daily increment of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataDayGrowthSize> freezeDataDayGrowthSize_ = nullptr;
    // The proportion of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataRatio> freezeDataRatio_ = nullptr;
    // The amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSize> freezeDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio> freezeDataSizeDayGrowthRatio_ = nullptr;
    // The daily increment of the amount of hot data. Hot data refers to data that is accessed in recent seven days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataDayGrowthSize> hotDataDayGrowthSize_ = nullptr;
    // The proportion of hot data. Hot data refers to data that is accessed in recent seven days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataRatio> hotDataRatio_ = nullptr;
    // The amount of hot data. Hot data refers to data that is accessed in recent seven days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSize> hotDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of hot data. Hot data refers to data that is accessed in recent seven days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsHotDataSizeDayGrowthRatio> hotDataSizeDayGrowthRatio_ = nullptr;
    // The number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCount> largeFileCount_ = nullptr;
    // The day-to-day growth rate of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileCountDayGrowthRatio> largeFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileDayGrowthCount> largeFileDayGrowthCount_ = nullptr;
    // The proportion of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsLargeFileRatio> largeFileRatio_ = nullptr;
    // The number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCount> mediumFileCount_ = nullptr;
    // The day-to-day growth rate of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileCountDayGrowthRatio> mediumFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileDayGrowthCount> mediumFileDayGrowthCount_ = nullptr;
    // The proportion of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsMediumFileRatio> mediumFileRatio_ = nullptr;
    // The number of partitions.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsPartitionNum> partitionNum_ = nullptr;
    // The number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCount> smallFileCount_ = nullptr;
    // The day-to-day growth rate of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileCountDayGrowthRatio> smallFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileDayGrowthCount> smallFileDayGrowthCount_ = nullptr;
    // The proportion of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsSmallFileRatio> smallFileRatio_ = nullptr;
    // The number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCount> tinyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileCountDayGrowthRatio> tinyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileDayGrowthCount> tinyFileDayGrowthCount_ = nullptr;
    // The proportion of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsTinyFileRatio> tinyFileRatio_ = nullptr;
    // The daily incremental of the total data volume.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataDayGrowthSize> totalDataDayGrowthSize_ = nullptr;
    // The total amount of data.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSize> totalDataSize_ = nullptr;
    // The day-to-day growth rate of the total data volume.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsTotalDataSizeDayGrowthRatio> totalDataSizeDayGrowthRatio_ = nullptr;
    // The total number of files.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCount> totalFileCount_ = nullptr;
    // The day-to-day growth rate of the total number of files.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileCountDayGrowthRatio> totalFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the total number of files.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsTotalFileDayGrowthCount> totalFileDayGrowthCount_ = nullptr;
    // The daily increment of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in 30 days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataDayGrowthSize> warmDataDayGrowthSize_ = nullptr;
    // The proportion of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in 30 days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataRatio> warmDataRatio_ = nullptr;
    // The amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in 30 days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSize> warmDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in 30 days.
    std::shared_ptr<Models::GetDoctorHiveTableResponseBodyDataMetricsWarmDataSizeDayGrowthRatio> warmDataSizeDayGrowthRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
