// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHDFSDIRECTORYRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHDFSDIRECTORYRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSizeDayGrowthRatio.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHDFSDirectoryResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHDFSDirectoryResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(ColdDataDayGrowthSize, coldDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_TO_JSON(ColdDataSizeDayGrowthRatio, coldDataSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(EmptyFileCount, emptyFileCount_);
      DARABONBA_PTR_TO_JSON(EmptyFileCountDayGrowthRatio, emptyFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(EmptyFileDayGrowthCount, emptyFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(FreezeDataDayGrowthSize, freezeDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(FreezeDataSize, freezeDataSize_);
      DARABONBA_PTR_TO_JSON(FreezeDataSizeDayGrowthRatio, freezeDataSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(HotDataDayGrowthSize, hotDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(HotDataSize, hotDataSize_);
      DARABONBA_PTR_TO_JSON(HotDataSizeDayGrowthRatio, hotDataSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(LargeFileCount, largeFileCount_);
      DARABONBA_PTR_TO_JSON(LargeFileCountDayGrowthRatio, largeFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(LargeFileDayGrowthCount, largeFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(MediumFileCount, mediumFileCount_);
      DARABONBA_PTR_TO_JSON(MediumFileCountDayGrowthRatio, mediumFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(MediumFileDayGrowthCount, mediumFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(SmallFileCount, smallFileCount_);
      DARABONBA_PTR_TO_JSON(SmallFileCountDayGrowthRatio, smallFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(SmallFileDayGrowthCount, smallFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(TinyFileCount, tinyFileCount_);
      DARABONBA_PTR_TO_JSON(TinyFileCountDayGrowthRatio, tinyFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(TinyFileDayGrowthCount, tinyFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(TotalDataDayGrowthSize, totalDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
      DARABONBA_PTR_TO_JSON(TotalDataSizeDayGrowthRatio, totalDataSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(TotalFileCount, totalFileCount_);
      DARABONBA_PTR_TO_JSON(TotalFileCountDayGrowthRatio, totalFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(TotalFileDayGrowthCount, totalFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(WarmDataDayGrowthSize, warmDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(WarmDataSize, warmDataSize_);
      DARABONBA_PTR_TO_JSON(WarmDataSizeDayGrowthRatio, warmDataSizeDayGrowthRatio_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHDFSDirectoryResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(ColdDataDayGrowthSize, coldDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_FROM_JSON(ColdDataSizeDayGrowthRatio, coldDataSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(EmptyFileCount, emptyFileCount_);
      DARABONBA_PTR_FROM_JSON(EmptyFileCountDayGrowthRatio, emptyFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(EmptyFileDayGrowthCount, emptyFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(FreezeDataDayGrowthSize, freezeDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(FreezeDataSize, freezeDataSize_);
      DARABONBA_PTR_FROM_JSON(FreezeDataSizeDayGrowthRatio, freezeDataSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(HotDataDayGrowthSize, hotDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(HotDataSize, hotDataSize_);
      DARABONBA_PTR_FROM_JSON(HotDataSizeDayGrowthRatio, hotDataSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(LargeFileCount, largeFileCount_);
      DARABONBA_PTR_FROM_JSON(LargeFileCountDayGrowthRatio, largeFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(LargeFileDayGrowthCount, largeFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(MediumFileCount, mediumFileCount_);
      DARABONBA_PTR_FROM_JSON(MediumFileCountDayGrowthRatio, mediumFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(MediumFileDayGrowthCount, mediumFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(SmallFileCount, smallFileCount_);
      DARABONBA_PTR_FROM_JSON(SmallFileCountDayGrowthRatio, smallFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(SmallFileDayGrowthCount, smallFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(TinyFileCount, tinyFileCount_);
      DARABONBA_PTR_FROM_JSON(TinyFileCountDayGrowthRatio, tinyFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(TinyFileDayGrowthCount, tinyFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(TotalDataDayGrowthSize, totalDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
      DARABONBA_PTR_FROM_JSON(TotalDataSizeDayGrowthRatio, totalDataSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(TotalFileCount, totalFileCount_);
      DARABONBA_PTR_FROM_JSON(TotalFileCountDayGrowthRatio, totalFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(TotalFileDayGrowthCount, totalFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(WarmDataDayGrowthSize, warmDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(WarmDataSize, warmDataSize_);
      DARABONBA_PTR_FROM_JSON(WarmDataSizeDayGrowthRatio, warmDataSizeDayGrowthRatio_);
    };
    GetDoctorHDFSDirectoryResponseBodyDataMetrics() = default ;
    GetDoctorHDFSDirectoryResponseBodyDataMetrics(const GetDoctorHDFSDirectoryResponseBodyDataMetrics &) = default ;
    GetDoctorHDFSDirectoryResponseBodyDataMetrics(GetDoctorHDFSDirectoryResponseBodyDataMetrics &&) = default ;
    GetDoctorHDFSDirectoryResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHDFSDirectoryResponseBodyDataMetrics() = default ;
    GetDoctorHDFSDirectoryResponseBodyDataMetrics& operator=(const GetDoctorHDFSDirectoryResponseBodyDataMetrics &) = default ;
    GetDoctorHDFSDirectoryResponseBodyDataMetrics& operator=(GetDoctorHDFSDirectoryResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coldDataDayGrowthSize_ != nullptr
        && this->coldDataSize_ != nullptr && this->coldDataSizeDayGrowthRatio_ != nullptr && this->emptyFileCount_ != nullptr && this->emptyFileCountDayGrowthRatio_ != nullptr && this->emptyFileDayGrowthCount_ != nullptr
        && this->freezeDataDayGrowthSize_ != nullptr && this->freezeDataSize_ != nullptr && this->freezeDataSizeDayGrowthRatio_ != nullptr && this->hotDataDayGrowthSize_ != nullptr && this->hotDataSize_ != nullptr
        && this->hotDataSizeDayGrowthRatio_ != nullptr && this->largeFileCount_ != nullptr && this->largeFileCountDayGrowthRatio_ != nullptr && this->largeFileDayGrowthCount_ != nullptr && this->mediumFileCount_ != nullptr
        && this->mediumFileCountDayGrowthRatio_ != nullptr && this->mediumFileDayGrowthCount_ != nullptr && this->smallFileCount_ != nullptr && this->smallFileCountDayGrowthRatio_ != nullptr && this->smallFileDayGrowthCount_ != nullptr
        && this->tinyFileCount_ != nullptr && this->tinyFileCountDayGrowthRatio_ != nullptr && this->tinyFileDayGrowthCount_ != nullptr && this->totalDataDayGrowthSize_ != nullptr && this->totalDataSize_ != nullptr
        && this->totalDataSizeDayGrowthRatio_ != nullptr && this->totalFileCount_ != nullptr && this->totalFileCountDayGrowthRatio_ != nullptr && this->totalFileDayGrowthCount_ != nullptr && this->warmDataDayGrowthSize_ != nullptr
        && this->warmDataSize_ != nullptr && this->warmDataSizeDayGrowthRatio_ != nullptr; };
    // coldDataDayGrowthSize Field Functions 
    bool hasColdDataDayGrowthSize() const { return this->coldDataDayGrowthSize_ != nullptr;};
    void deleteColdDataDayGrowthSize() { this->coldDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(coldDataDayGrowthSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataDayGrowthSize coldDataDayGrowthSize() { DARABONBA_PTR_GET(coldDataDayGrowthSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setColdDataDayGrowthSize(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setColdDataDayGrowthSize(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataDayGrowthSize && coldDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };


    // coldDataSize Field Functions 
    bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
    void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSize & coldDataSize() const { DARABONBA_PTR_GET_CONST(coldDataSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSize) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSize coldDataSize() { DARABONBA_PTR_GET(coldDataSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setColdDataSize(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSize & coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setColdDataSize(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSize && coldDataSize) { DARABONBA_PTR_SET_RVALUE(coldDataSize_, coldDataSize) };


    // coldDataSizeDayGrowthRatio Field Functions 
    bool hasColdDataSizeDayGrowthRatio() const { return this->coldDataSizeDayGrowthRatio_ != nullptr;};
    void deleteColdDataSizeDayGrowthRatio() { this->coldDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(coldDataSizeDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSizeDayGrowthRatio coldDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(coldDataSizeDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSizeDayGrowthRatio && coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };


    // emptyFileCount Field Functions 
    bool hasEmptyFileCount() const { return this->emptyFileCount_ != nullptr;};
    void deleteEmptyFileCount() { this->emptyFileCount_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCount & emptyFileCount() const { DARABONBA_PTR_GET_CONST(emptyFileCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCount) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCount emptyFileCount() { DARABONBA_PTR_GET(emptyFileCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setEmptyFileCount(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCount & emptyFileCount) { DARABONBA_PTR_SET_VALUE(emptyFileCount_, emptyFileCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setEmptyFileCount(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCount && emptyFileCount) { DARABONBA_PTR_SET_RVALUE(emptyFileCount_, emptyFileCount) };


    // emptyFileCountDayGrowthRatio Field Functions 
    bool hasEmptyFileCountDayGrowthRatio() const { return this->emptyFileCountDayGrowthRatio_ != nullptr;};
    void deleteEmptyFileCountDayGrowthRatio() { this->emptyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(emptyFileCountDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCountDayGrowthRatio emptyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(emptyFileCountDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCountDayGrowthRatio && emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };


    // emptyFileDayGrowthCount Field Functions 
    bool hasEmptyFileDayGrowthCount() const { return this->emptyFileDayGrowthCount_ != nullptr;};
    void deleteEmptyFileDayGrowthCount() { this->emptyFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(emptyFileDayGrowthCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileDayGrowthCount emptyFileDayGrowthCount() { DARABONBA_PTR_GET(emptyFileDayGrowthCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setEmptyFileDayGrowthCount(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setEmptyFileDayGrowthCount(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileDayGrowthCount && emptyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };


    // freezeDataDayGrowthSize Field Functions 
    bool hasFreezeDataDayGrowthSize() const { return this->freezeDataDayGrowthSize_ != nullptr;};
    void deleteFreezeDataDayGrowthSize() { this->freezeDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(freezeDataDayGrowthSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataDayGrowthSize freezeDataDayGrowthSize() { DARABONBA_PTR_GET(freezeDataDayGrowthSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setFreezeDataDayGrowthSize(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setFreezeDataDayGrowthSize(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataDayGrowthSize && freezeDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };


    // freezeDataSize Field Functions 
    bool hasFreezeDataSize() const { return this->freezeDataSize_ != nullptr;};
    void deleteFreezeDataSize() { this->freezeDataSize_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize & freezeDataSize() const { DARABONBA_PTR_GET_CONST(freezeDataSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize freezeDataSize() { DARABONBA_PTR_GET(freezeDataSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setFreezeDataSize(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize & freezeDataSize) { DARABONBA_PTR_SET_VALUE(freezeDataSize_, freezeDataSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setFreezeDataSize(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize && freezeDataSize) { DARABONBA_PTR_SET_RVALUE(freezeDataSize_, freezeDataSize) };


    // freezeDataSizeDayGrowthRatio Field Functions 
    bool hasFreezeDataSizeDayGrowthRatio() const { return this->freezeDataSizeDayGrowthRatio_ != nullptr;};
    void deleteFreezeDataSizeDayGrowthRatio() { this->freezeDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(freezeDataSizeDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio freezeDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(freezeDataSizeDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio && freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };


    // hotDataDayGrowthSize Field Functions 
    bool hasHotDataDayGrowthSize() const { return this->hotDataDayGrowthSize_ != nullptr;};
    void deleteHotDataDayGrowthSize() { this->hotDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(hotDataDayGrowthSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataDayGrowthSize hotDataDayGrowthSize() { DARABONBA_PTR_GET(hotDataDayGrowthSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setHotDataDayGrowthSize(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setHotDataDayGrowthSize(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataDayGrowthSize && hotDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };


    // hotDataSize Field Functions 
    bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
    void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSize & hotDataSize() const { DARABONBA_PTR_GET_CONST(hotDataSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSize) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSize hotDataSize() { DARABONBA_PTR_GET(hotDataSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setHotDataSize(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSize & hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setHotDataSize(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSize && hotDataSize) { DARABONBA_PTR_SET_RVALUE(hotDataSize_, hotDataSize) };


    // hotDataSizeDayGrowthRatio Field Functions 
    bool hasHotDataSizeDayGrowthRatio() const { return this->hotDataSizeDayGrowthRatio_ != nullptr;};
    void deleteHotDataSizeDayGrowthRatio() { this->hotDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(hotDataSizeDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSizeDayGrowthRatio hotDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(hotDataSizeDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSizeDayGrowthRatio && hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };


    // largeFileCount Field Functions 
    bool hasLargeFileCount() const { return this->largeFileCount_ != nullptr;};
    void deleteLargeFileCount() { this->largeFileCount_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCount & largeFileCount() const { DARABONBA_PTR_GET_CONST(largeFileCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCount) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCount largeFileCount() { DARABONBA_PTR_GET(largeFileCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setLargeFileCount(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCount & largeFileCount) { DARABONBA_PTR_SET_VALUE(largeFileCount_, largeFileCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setLargeFileCount(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCount && largeFileCount) { DARABONBA_PTR_SET_RVALUE(largeFileCount_, largeFileCount) };


    // largeFileCountDayGrowthRatio Field Functions 
    bool hasLargeFileCountDayGrowthRatio() const { return this->largeFileCountDayGrowthRatio_ != nullptr;};
    void deleteLargeFileCountDayGrowthRatio() { this->largeFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(largeFileCountDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCountDayGrowthRatio largeFileCountDayGrowthRatio() { DARABONBA_PTR_GET(largeFileCountDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCountDayGrowthRatio && largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };


    // largeFileDayGrowthCount Field Functions 
    bool hasLargeFileDayGrowthCount() const { return this->largeFileDayGrowthCount_ != nullptr;};
    void deleteLargeFileDayGrowthCount() { this->largeFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(largeFileDayGrowthCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileDayGrowthCount largeFileDayGrowthCount() { DARABONBA_PTR_GET(largeFileDayGrowthCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setLargeFileDayGrowthCount(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setLargeFileDayGrowthCount(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileDayGrowthCount && largeFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };


    // mediumFileCount Field Functions 
    bool hasMediumFileCount() const { return this->mediumFileCount_ != nullptr;};
    void deleteMediumFileCount() { this->mediumFileCount_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCount & mediumFileCount() const { DARABONBA_PTR_GET_CONST(mediumFileCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCount) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCount mediumFileCount() { DARABONBA_PTR_GET(mediumFileCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setMediumFileCount(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCount & mediumFileCount) { DARABONBA_PTR_SET_VALUE(mediumFileCount_, mediumFileCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setMediumFileCount(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCount && mediumFileCount) { DARABONBA_PTR_SET_RVALUE(mediumFileCount_, mediumFileCount) };


    // mediumFileCountDayGrowthRatio Field Functions 
    bool hasMediumFileCountDayGrowthRatio() const { return this->mediumFileCountDayGrowthRatio_ != nullptr;};
    void deleteMediumFileCountDayGrowthRatio() { this->mediumFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(mediumFileCountDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCountDayGrowthRatio mediumFileCountDayGrowthRatio() { DARABONBA_PTR_GET(mediumFileCountDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCountDayGrowthRatio && mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };


    // mediumFileDayGrowthCount Field Functions 
    bool hasMediumFileDayGrowthCount() const { return this->mediumFileDayGrowthCount_ != nullptr;};
    void deleteMediumFileDayGrowthCount() { this->mediumFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(mediumFileDayGrowthCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileDayGrowthCount mediumFileDayGrowthCount() { DARABONBA_PTR_GET(mediumFileDayGrowthCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setMediumFileDayGrowthCount(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setMediumFileDayGrowthCount(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileDayGrowthCount && mediumFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };


    // smallFileCount Field Functions 
    bool hasSmallFileCount() const { return this->smallFileCount_ != nullptr;};
    void deleteSmallFileCount() { this->smallFileCount_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCount & smallFileCount() const { DARABONBA_PTR_GET_CONST(smallFileCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCount) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCount smallFileCount() { DARABONBA_PTR_GET(smallFileCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setSmallFileCount(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCount & smallFileCount) { DARABONBA_PTR_SET_VALUE(smallFileCount_, smallFileCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setSmallFileCount(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCount && smallFileCount) { DARABONBA_PTR_SET_RVALUE(smallFileCount_, smallFileCount) };


    // smallFileCountDayGrowthRatio Field Functions 
    bool hasSmallFileCountDayGrowthRatio() const { return this->smallFileCountDayGrowthRatio_ != nullptr;};
    void deleteSmallFileCountDayGrowthRatio() { this->smallFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(smallFileCountDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCountDayGrowthRatio smallFileCountDayGrowthRatio() { DARABONBA_PTR_GET(smallFileCountDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCountDayGrowthRatio && smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };


    // smallFileDayGrowthCount Field Functions 
    bool hasSmallFileDayGrowthCount() const { return this->smallFileDayGrowthCount_ != nullptr;};
    void deleteSmallFileDayGrowthCount() { this->smallFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(smallFileDayGrowthCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileDayGrowthCount smallFileDayGrowthCount() { DARABONBA_PTR_GET(smallFileDayGrowthCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setSmallFileDayGrowthCount(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setSmallFileDayGrowthCount(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileDayGrowthCount && smallFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };


    // tinyFileCount Field Functions 
    bool hasTinyFileCount() const { return this->tinyFileCount_ != nullptr;};
    void deleteTinyFileCount() { this->tinyFileCount_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCount & tinyFileCount() const { DARABONBA_PTR_GET_CONST(tinyFileCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCount) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCount tinyFileCount() { DARABONBA_PTR_GET(tinyFileCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTinyFileCount(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCount & tinyFileCount) { DARABONBA_PTR_SET_VALUE(tinyFileCount_, tinyFileCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTinyFileCount(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCount && tinyFileCount) { DARABONBA_PTR_SET_RVALUE(tinyFileCount_, tinyFileCount) };


    // tinyFileCountDayGrowthRatio Field Functions 
    bool hasTinyFileCountDayGrowthRatio() const { return this->tinyFileCountDayGrowthRatio_ != nullptr;};
    void deleteTinyFileCountDayGrowthRatio() { this->tinyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(tinyFileCountDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCountDayGrowthRatio tinyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(tinyFileCountDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCountDayGrowthRatio && tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };


    // tinyFileDayGrowthCount Field Functions 
    bool hasTinyFileDayGrowthCount() const { return this->tinyFileDayGrowthCount_ != nullptr;};
    void deleteTinyFileDayGrowthCount() { this->tinyFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(tinyFileDayGrowthCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileDayGrowthCount tinyFileDayGrowthCount() { DARABONBA_PTR_GET(tinyFileDayGrowthCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTinyFileDayGrowthCount(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTinyFileDayGrowthCount(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileDayGrowthCount && tinyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };


    // totalDataDayGrowthSize Field Functions 
    bool hasTotalDataDayGrowthSize() const { return this->totalDataDayGrowthSize_ != nullptr;};
    void deleteTotalDataDayGrowthSize() { this->totalDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(totalDataDayGrowthSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataDayGrowthSize totalDataDayGrowthSize() { DARABONBA_PTR_GET(totalDataDayGrowthSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTotalDataDayGrowthSize(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTotalDataDayGrowthSize(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataDayGrowthSize && totalDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };


    // totalDataSize Field Functions 
    bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
    void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSize & totalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSize) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSize totalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTotalDataSize(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTotalDataSize(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


    // totalDataSizeDayGrowthRatio Field Functions 
    bool hasTotalDataSizeDayGrowthRatio() const { return this->totalDataSizeDayGrowthRatio_ != nullptr;};
    void deleteTotalDataSizeDayGrowthRatio() { this->totalDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalDataSizeDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSizeDayGrowthRatio totalDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(totalDataSizeDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSizeDayGrowthRatio && totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCount & totalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCount) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCount totalFileCount() { DARABONBA_PTR_GET(totalFileCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTotalFileCount(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCount & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTotalFileCount(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCount && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


    // totalFileCountDayGrowthRatio Field Functions 
    bool hasTotalFileCountDayGrowthRatio() const { return this->totalFileCountDayGrowthRatio_ != nullptr;};
    void deleteTotalFileCountDayGrowthRatio() { this->totalFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalFileCountDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCountDayGrowthRatio totalFileCountDayGrowthRatio() { DARABONBA_PTR_GET(totalFileCountDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCountDayGrowthRatio && totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };


    // totalFileDayGrowthCount Field Functions 
    bool hasTotalFileDayGrowthCount() const { return this->totalFileDayGrowthCount_ != nullptr;};
    void deleteTotalFileDayGrowthCount() { this->totalFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(totalFileDayGrowthCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileDayGrowthCount totalFileDayGrowthCount() { DARABONBA_PTR_GET(totalFileDayGrowthCount_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTotalFileDayGrowthCount(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setTotalFileDayGrowthCount(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileDayGrowthCount && totalFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };


    // warmDataDayGrowthSize Field Functions 
    bool hasWarmDataDayGrowthSize() const { return this->warmDataDayGrowthSize_ != nullptr;};
    void deleteWarmDataDayGrowthSize() { this->warmDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(warmDataDayGrowthSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataDayGrowthSize warmDataDayGrowthSize() { DARABONBA_PTR_GET(warmDataDayGrowthSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setWarmDataDayGrowthSize(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setWarmDataDayGrowthSize(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataDayGrowthSize && warmDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };


    // warmDataSize Field Functions 
    bool hasWarmDataSize() const { return this->warmDataSize_ != nullptr;};
    void deleteWarmDataSize() { this->warmDataSize_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSize & warmDataSize() const { DARABONBA_PTR_GET_CONST(warmDataSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSize) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSize warmDataSize() { DARABONBA_PTR_GET(warmDataSize_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setWarmDataSize(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSize & warmDataSize) { DARABONBA_PTR_SET_VALUE(warmDataSize_, warmDataSize) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setWarmDataSize(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSize && warmDataSize) { DARABONBA_PTR_SET_RVALUE(warmDataSize_, warmDataSize) };


    // warmDataSizeDayGrowthRatio Field Functions 
    bool hasWarmDataSizeDayGrowthRatio() const { return this->warmDataSizeDayGrowthRatio_ != nullptr;};
    void deleteWarmDataSizeDayGrowthRatio() { this->warmDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(warmDataSizeDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSizeDayGrowthRatio warmDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(warmDataSizeDayGrowthRatio_, Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(const Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSizeDayGrowthRatio && warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };


  protected:
    // The daily increment of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataDayGrowthSize> coldDataDayGrowthSize_ = nullptr;
    // The amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSize> coldDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsColdDataSizeDayGrowthRatio> coldDataSizeDayGrowthRatio_ = nullptr;
    // The number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCount> emptyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileCountDayGrowthRatio> emptyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsEmptyFileDayGrowthCount> emptyFileDayGrowthCount_ = nullptr;
    // The daily increment of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataDayGrowthSize> freezeDataDayGrowthSize_ = nullptr;
    // The amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize> freezeDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio> freezeDataSizeDayGrowthRatio_ = nullptr;
    // The daily increment of the amount of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataDayGrowthSize> hotDataDayGrowthSize_ = nullptr;
    // The amount of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSize> hotDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsHotDataSizeDayGrowthRatio> hotDataSizeDayGrowthRatio_ = nullptr;
    // The number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCount> largeFileCount_ = nullptr;
    // The day-to-day growth rate of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileCountDayGrowthRatio> largeFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsLargeFileDayGrowthCount> largeFileDayGrowthCount_ = nullptr;
    // The number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCount> mediumFileCount_ = nullptr;
    // The day-to-day growth rate of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileCountDayGrowthRatio> mediumFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsMediumFileDayGrowthCount> mediumFileDayGrowthCount_ = nullptr;
    // The number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCount> smallFileCount_ = nullptr;
    // The day-to-day growth rate of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileCountDayGrowthRatio> smallFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsSmallFileDayGrowthCount> smallFileDayGrowthCount_ = nullptr;
    // The number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCount> tinyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileCountDayGrowthRatio> tinyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTinyFileDayGrowthCount> tinyFileDayGrowthCount_ = nullptr;
    // The daily incremental of the total amount of data.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataDayGrowthSize> totalDataDayGrowthSize_ = nullptr;
    // The total amount of data.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSize> totalDataSize_ = nullptr;
    // The day-to-day growth rate of the total data volume.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalDataSizeDayGrowthRatio> totalDataSizeDayGrowthRatio_ = nullptr;
    // The total number of files.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCount> totalFileCount_ = nullptr;
    // The day-to-day growth rate of the total number of files.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileCountDayGrowthRatio> totalFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the total number of files.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsTotalFileDayGrowthCount> totalFileDayGrowthCount_ = nullptr;
    // The daily increment of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataDayGrowthSize> warmDataDayGrowthSize_ = nullptr;
    // The amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSize> warmDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::GetDoctorHDFSDirectoryResponseBodyDataMetricsWarmDataSizeDayGrowthRatio> warmDataSizeDayGrowthRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
