// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHDFSCLUSTERRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHDFSCLUSTERRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsColdDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsColdDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsHotDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsHotDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileDayGrowthCount.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataDayGrowthSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataRatio.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSize.hpp>
#include <alibabacloud/models/GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHDFSClusterResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHDFSClusterResponseBodyDataMetrics& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetDoctorHDFSClusterResponseBodyDataMetrics& obj) { 
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
    GetDoctorHDFSClusterResponseBodyDataMetrics() = default ;
    GetDoctorHDFSClusterResponseBodyDataMetrics(const GetDoctorHDFSClusterResponseBodyDataMetrics &) = default ;
    GetDoctorHDFSClusterResponseBodyDataMetrics(GetDoctorHDFSClusterResponseBodyDataMetrics &&) = default ;
    GetDoctorHDFSClusterResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHDFSClusterResponseBodyDataMetrics() = default ;
    GetDoctorHDFSClusterResponseBodyDataMetrics& operator=(const GetDoctorHDFSClusterResponseBodyDataMetrics &) = default ;
    GetDoctorHDFSClusterResponseBodyDataMetrics& operator=(GetDoctorHDFSClusterResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coldDataDayGrowthSize_ == nullptr
        && return this->coldDataRatio_ == nullptr && return this->coldDataSize_ == nullptr && return this->coldDataSizeDayGrowthRatio_ == nullptr && return this->emptyFileCount_ == nullptr && return this->emptyFileCountDayGrowthRatio_ == nullptr
        && return this->emptyFileDayGrowthCount_ == nullptr && return this->emptyFileRatio_ == nullptr && return this->freezeDataDayGrowthSize_ == nullptr && return this->freezeDataRatio_ == nullptr && return this->freezeDataSize_ == nullptr
        && return this->freezeDataSizeDayGrowthRatio_ == nullptr && return this->hotDataDayGrowthSize_ == nullptr && return this->hotDataRatio_ == nullptr && return this->hotDataSize_ == nullptr && return this->hotDataSizeDayGrowthRatio_ == nullptr
        && return this->largeFileCount_ == nullptr && return this->largeFileCountDayGrowthRatio_ == nullptr && return this->largeFileDayGrowthCount_ == nullptr && return this->largeFileRatio_ == nullptr && return this->mediumFileCount_ == nullptr
        && return this->mediumFileCountDayGrowthRatio_ == nullptr && return this->mediumFileDayGrowthCount_ == nullptr && return this->mediumFileRatio_ == nullptr && return this->smallFileCount_ == nullptr && return this->smallFileCountDayGrowthRatio_ == nullptr
        && return this->smallFileDayGrowthCount_ == nullptr && return this->smallFileRatio_ == nullptr && return this->tinyFileCount_ == nullptr && return this->tinyFileCountDayGrowthRatio_ == nullptr && return this->tinyFileDayGrowthCount_ == nullptr
        && return this->tinyFileRatio_ == nullptr && return this->totalDataDayGrowthSize_ == nullptr && return this->totalDataSize_ == nullptr && return this->totalDataSizeDayGrowthRatio_ == nullptr && return this->totalFileCount_ == nullptr
        && return this->totalFileCountDayGrowthRatio_ == nullptr && return this->totalFileDayGrowthCount_ == nullptr && return this->warmDataDayGrowthSize_ == nullptr && return this->warmDataRatio_ == nullptr && return this->warmDataSize_ == nullptr
        && return this->warmDataSizeDayGrowthRatio_ == nullptr; };
    // coldDataDayGrowthSize Field Functions 
    bool hasColdDataDayGrowthSize() const { return this->coldDataDayGrowthSize_ != nullptr;};
    void deleteColdDataDayGrowthSize() { this->coldDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(coldDataDayGrowthSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataDayGrowthSize coldDataDayGrowthSize() { DARABONBA_PTR_GET(coldDataDayGrowthSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setColdDataDayGrowthSize(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setColdDataDayGrowthSize(Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataDayGrowthSize && coldDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };


    // coldDataRatio Field Functions 
    bool hasColdDataRatio() const { return this->coldDataRatio_ != nullptr;};
    void deleteColdDataRatio() { this->coldDataRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataRatio & coldDataRatio() const { DARABONBA_PTR_GET_CONST(coldDataRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataRatio coldDataRatio() { DARABONBA_PTR_GET(coldDataRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setColdDataRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataRatio & coldDataRatio) { DARABONBA_PTR_SET_VALUE(coldDataRatio_, coldDataRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setColdDataRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataRatio && coldDataRatio) { DARABONBA_PTR_SET_RVALUE(coldDataRatio_, coldDataRatio) };


    // coldDataSize Field Functions 
    bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
    void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSize & coldDataSize() const { DARABONBA_PTR_GET_CONST(coldDataSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSize) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSize coldDataSize() { DARABONBA_PTR_GET(coldDataSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setColdDataSize(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSize & coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setColdDataSize(Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSize && coldDataSize) { DARABONBA_PTR_SET_RVALUE(coldDataSize_, coldDataSize) };


    // coldDataSizeDayGrowthRatio Field Functions 
    bool hasColdDataSizeDayGrowthRatio() const { return this->coldDataSizeDayGrowthRatio_ != nullptr;};
    void deleteColdDataSizeDayGrowthRatio() { this->coldDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(coldDataSizeDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio coldDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(coldDataSizeDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio && coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };


    // emptyFileCount Field Functions 
    bool hasEmptyFileCount() const { return this->emptyFileCount_ != nullptr;};
    void deleteEmptyFileCount() { this->emptyFileCount_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCount & emptyFileCount() const { DARABONBA_PTR_GET_CONST(emptyFileCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCount) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCount emptyFileCount() { DARABONBA_PTR_GET(emptyFileCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setEmptyFileCount(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCount & emptyFileCount) { DARABONBA_PTR_SET_VALUE(emptyFileCount_, emptyFileCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setEmptyFileCount(Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCount && emptyFileCount) { DARABONBA_PTR_SET_RVALUE(emptyFileCount_, emptyFileCount) };


    // emptyFileCountDayGrowthRatio Field Functions 
    bool hasEmptyFileCountDayGrowthRatio() const { return this->emptyFileCountDayGrowthRatio_ != nullptr;};
    void deleteEmptyFileCountDayGrowthRatio() { this->emptyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(emptyFileCountDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio emptyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(emptyFileCountDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio && emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };


    // emptyFileDayGrowthCount Field Functions 
    bool hasEmptyFileDayGrowthCount() const { return this->emptyFileDayGrowthCount_ != nullptr;};
    void deleteEmptyFileDayGrowthCount() { this->emptyFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(emptyFileDayGrowthCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileDayGrowthCount emptyFileDayGrowthCount() { DARABONBA_PTR_GET(emptyFileDayGrowthCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setEmptyFileDayGrowthCount(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setEmptyFileDayGrowthCount(Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileDayGrowthCount && emptyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };


    // emptyFileRatio Field Functions 
    bool hasEmptyFileRatio() const { return this->emptyFileRatio_ != nullptr;};
    void deleteEmptyFileRatio() { this->emptyFileRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileRatio & emptyFileRatio() const { DARABONBA_PTR_GET_CONST(emptyFileRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileRatio emptyFileRatio() { DARABONBA_PTR_GET(emptyFileRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setEmptyFileRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileRatio & emptyFileRatio) { DARABONBA_PTR_SET_VALUE(emptyFileRatio_, emptyFileRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setEmptyFileRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileRatio && emptyFileRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileRatio_, emptyFileRatio) };


    // freezeDataDayGrowthSize Field Functions 
    bool hasFreezeDataDayGrowthSize() const { return this->freezeDataDayGrowthSize_ != nullptr;};
    void deleteFreezeDataDayGrowthSize() { this->freezeDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(freezeDataDayGrowthSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataDayGrowthSize freezeDataDayGrowthSize() { DARABONBA_PTR_GET(freezeDataDayGrowthSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setFreezeDataDayGrowthSize(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setFreezeDataDayGrowthSize(Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataDayGrowthSize && freezeDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };


    // freezeDataRatio Field Functions 
    bool hasFreezeDataRatio() const { return this->freezeDataRatio_ != nullptr;};
    void deleteFreezeDataRatio() { this->freezeDataRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataRatio & freezeDataRatio() const { DARABONBA_PTR_GET_CONST(freezeDataRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataRatio freezeDataRatio() { DARABONBA_PTR_GET(freezeDataRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setFreezeDataRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataRatio & freezeDataRatio) { DARABONBA_PTR_SET_VALUE(freezeDataRatio_, freezeDataRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setFreezeDataRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataRatio && freezeDataRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataRatio_, freezeDataRatio) };


    // freezeDataSize Field Functions 
    bool hasFreezeDataSize() const { return this->freezeDataSize_ != nullptr;};
    void deleteFreezeDataSize() { this->freezeDataSize_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSize & freezeDataSize() const { DARABONBA_PTR_GET_CONST(freezeDataSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSize) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSize freezeDataSize() { DARABONBA_PTR_GET(freezeDataSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setFreezeDataSize(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSize & freezeDataSize) { DARABONBA_PTR_SET_VALUE(freezeDataSize_, freezeDataSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setFreezeDataSize(Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSize && freezeDataSize) { DARABONBA_PTR_SET_RVALUE(freezeDataSize_, freezeDataSize) };


    // freezeDataSizeDayGrowthRatio Field Functions 
    bool hasFreezeDataSizeDayGrowthRatio() const { return this->freezeDataSizeDayGrowthRatio_ != nullptr;};
    void deleteFreezeDataSizeDayGrowthRatio() { this->freezeDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(freezeDataSizeDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio freezeDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(freezeDataSizeDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio && freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };


    // hotDataDayGrowthSize Field Functions 
    bool hasHotDataDayGrowthSize() const { return this->hotDataDayGrowthSize_ != nullptr;};
    void deleteHotDataDayGrowthSize() { this->hotDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(hotDataDayGrowthSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataDayGrowthSize hotDataDayGrowthSize() { DARABONBA_PTR_GET(hotDataDayGrowthSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setHotDataDayGrowthSize(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setHotDataDayGrowthSize(Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataDayGrowthSize && hotDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };


    // hotDataRatio Field Functions 
    bool hasHotDataRatio() const { return this->hotDataRatio_ != nullptr;};
    void deleteHotDataRatio() { this->hotDataRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataRatio & hotDataRatio() const { DARABONBA_PTR_GET_CONST(hotDataRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataRatio hotDataRatio() { DARABONBA_PTR_GET(hotDataRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setHotDataRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataRatio & hotDataRatio) { DARABONBA_PTR_SET_VALUE(hotDataRatio_, hotDataRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setHotDataRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataRatio && hotDataRatio) { DARABONBA_PTR_SET_RVALUE(hotDataRatio_, hotDataRatio) };


    // hotDataSize Field Functions 
    bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
    void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSize & hotDataSize() const { DARABONBA_PTR_GET_CONST(hotDataSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSize) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSize hotDataSize() { DARABONBA_PTR_GET(hotDataSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setHotDataSize(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSize & hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setHotDataSize(Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSize && hotDataSize) { DARABONBA_PTR_SET_RVALUE(hotDataSize_, hotDataSize) };


    // hotDataSizeDayGrowthRatio Field Functions 
    bool hasHotDataSizeDayGrowthRatio() const { return this->hotDataSizeDayGrowthRatio_ != nullptr;};
    void deleteHotDataSizeDayGrowthRatio() { this->hotDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(hotDataSizeDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio hotDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(hotDataSizeDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio && hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };


    // largeFileCount Field Functions 
    bool hasLargeFileCount() const { return this->largeFileCount_ != nullptr;};
    void deleteLargeFileCount() { this->largeFileCount_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCount & largeFileCount() const { DARABONBA_PTR_GET_CONST(largeFileCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCount) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCount largeFileCount() { DARABONBA_PTR_GET(largeFileCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setLargeFileCount(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCount & largeFileCount) { DARABONBA_PTR_SET_VALUE(largeFileCount_, largeFileCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setLargeFileCount(Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCount && largeFileCount) { DARABONBA_PTR_SET_RVALUE(largeFileCount_, largeFileCount) };


    // largeFileCountDayGrowthRatio Field Functions 
    bool hasLargeFileCountDayGrowthRatio() const { return this->largeFileCountDayGrowthRatio_ != nullptr;};
    void deleteLargeFileCountDayGrowthRatio() { this->largeFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(largeFileCountDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio largeFileCountDayGrowthRatio() { DARABONBA_PTR_GET(largeFileCountDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio && largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };


    // largeFileDayGrowthCount Field Functions 
    bool hasLargeFileDayGrowthCount() const { return this->largeFileDayGrowthCount_ != nullptr;};
    void deleteLargeFileDayGrowthCount() { this->largeFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(largeFileDayGrowthCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileDayGrowthCount largeFileDayGrowthCount() { DARABONBA_PTR_GET(largeFileDayGrowthCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setLargeFileDayGrowthCount(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setLargeFileDayGrowthCount(Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileDayGrowthCount && largeFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };


    // largeFileRatio Field Functions 
    bool hasLargeFileRatio() const { return this->largeFileRatio_ != nullptr;};
    void deleteLargeFileRatio() { this->largeFileRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileRatio & largeFileRatio() const { DARABONBA_PTR_GET_CONST(largeFileRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileRatio largeFileRatio() { DARABONBA_PTR_GET(largeFileRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setLargeFileRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileRatio & largeFileRatio) { DARABONBA_PTR_SET_VALUE(largeFileRatio_, largeFileRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setLargeFileRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileRatio && largeFileRatio) { DARABONBA_PTR_SET_RVALUE(largeFileRatio_, largeFileRatio) };


    // mediumFileCount Field Functions 
    bool hasMediumFileCount() const { return this->mediumFileCount_ != nullptr;};
    void deleteMediumFileCount() { this->mediumFileCount_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCount & mediumFileCount() const { DARABONBA_PTR_GET_CONST(mediumFileCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCount) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCount mediumFileCount() { DARABONBA_PTR_GET(mediumFileCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setMediumFileCount(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCount & mediumFileCount) { DARABONBA_PTR_SET_VALUE(mediumFileCount_, mediumFileCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setMediumFileCount(Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCount && mediumFileCount) { DARABONBA_PTR_SET_RVALUE(mediumFileCount_, mediumFileCount) };


    // mediumFileCountDayGrowthRatio Field Functions 
    bool hasMediumFileCountDayGrowthRatio() const { return this->mediumFileCountDayGrowthRatio_ != nullptr;};
    void deleteMediumFileCountDayGrowthRatio() { this->mediumFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(mediumFileCountDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio mediumFileCountDayGrowthRatio() { DARABONBA_PTR_GET(mediumFileCountDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio && mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };


    // mediumFileDayGrowthCount Field Functions 
    bool hasMediumFileDayGrowthCount() const { return this->mediumFileDayGrowthCount_ != nullptr;};
    void deleteMediumFileDayGrowthCount() { this->mediumFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(mediumFileDayGrowthCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileDayGrowthCount mediumFileDayGrowthCount() { DARABONBA_PTR_GET(mediumFileDayGrowthCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setMediumFileDayGrowthCount(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setMediumFileDayGrowthCount(Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileDayGrowthCount && mediumFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };


    // mediumFileRatio Field Functions 
    bool hasMediumFileRatio() const { return this->mediumFileRatio_ != nullptr;};
    void deleteMediumFileRatio() { this->mediumFileRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileRatio & mediumFileRatio() const { DARABONBA_PTR_GET_CONST(mediumFileRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileRatio mediumFileRatio() { DARABONBA_PTR_GET(mediumFileRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setMediumFileRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileRatio & mediumFileRatio) { DARABONBA_PTR_SET_VALUE(mediumFileRatio_, mediumFileRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setMediumFileRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileRatio && mediumFileRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileRatio_, mediumFileRatio) };


    // smallFileCount Field Functions 
    bool hasSmallFileCount() const { return this->smallFileCount_ != nullptr;};
    void deleteSmallFileCount() { this->smallFileCount_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCount & smallFileCount() const { DARABONBA_PTR_GET_CONST(smallFileCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCount) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCount smallFileCount() { DARABONBA_PTR_GET(smallFileCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setSmallFileCount(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCount & smallFileCount) { DARABONBA_PTR_SET_VALUE(smallFileCount_, smallFileCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setSmallFileCount(Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCount && smallFileCount) { DARABONBA_PTR_SET_RVALUE(smallFileCount_, smallFileCount) };


    // smallFileCountDayGrowthRatio Field Functions 
    bool hasSmallFileCountDayGrowthRatio() const { return this->smallFileCountDayGrowthRatio_ != nullptr;};
    void deleteSmallFileCountDayGrowthRatio() { this->smallFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(smallFileCountDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio smallFileCountDayGrowthRatio() { DARABONBA_PTR_GET(smallFileCountDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio && smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };


    // smallFileDayGrowthCount Field Functions 
    bool hasSmallFileDayGrowthCount() const { return this->smallFileDayGrowthCount_ != nullptr;};
    void deleteSmallFileDayGrowthCount() { this->smallFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(smallFileDayGrowthCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileDayGrowthCount smallFileDayGrowthCount() { DARABONBA_PTR_GET(smallFileDayGrowthCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setSmallFileDayGrowthCount(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setSmallFileDayGrowthCount(Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileDayGrowthCount && smallFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };


    // smallFileRatio Field Functions 
    bool hasSmallFileRatio() const { return this->smallFileRatio_ != nullptr;};
    void deleteSmallFileRatio() { this->smallFileRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileRatio & smallFileRatio() const { DARABONBA_PTR_GET_CONST(smallFileRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileRatio smallFileRatio() { DARABONBA_PTR_GET(smallFileRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setSmallFileRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileRatio & smallFileRatio) { DARABONBA_PTR_SET_VALUE(smallFileRatio_, smallFileRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setSmallFileRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileRatio && smallFileRatio) { DARABONBA_PTR_SET_RVALUE(smallFileRatio_, smallFileRatio) };


    // tinyFileCount Field Functions 
    bool hasTinyFileCount() const { return this->tinyFileCount_ != nullptr;};
    void deleteTinyFileCount() { this->tinyFileCount_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCount & tinyFileCount() const { DARABONBA_PTR_GET_CONST(tinyFileCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCount) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCount tinyFileCount() { DARABONBA_PTR_GET(tinyFileCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTinyFileCount(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCount & tinyFileCount) { DARABONBA_PTR_SET_VALUE(tinyFileCount_, tinyFileCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTinyFileCount(Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCount && tinyFileCount) { DARABONBA_PTR_SET_RVALUE(tinyFileCount_, tinyFileCount) };


    // tinyFileCountDayGrowthRatio Field Functions 
    bool hasTinyFileCountDayGrowthRatio() const { return this->tinyFileCountDayGrowthRatio_ != nullptr;};
    void deleteTinyFileCountDayGrowthRatio() { this->tinyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(tinyFileCountDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio tinyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(tinyFileCountDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio && tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };


    // tinyFileDayGrowthCount Field Functions 
    bool hasTinyFileDayGrowthCount() const { return this->tinyFileDayGrowthCount_ != nullptr;};
    void deleteTinyFileDayGrowthCount() { this->tinyFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(tinyFileDayGrowthCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileDayGrowthCount tinyFileDayGrowthCount() { DARABONBA_PTR_GET(tinyFileDayGrowthCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTinyFileDayGrowthCount(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTinyFileDayGrowthCount(Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileDayGrowthCount && tinyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };


    // tinyFileRatio Field Functions 
    bool hasTinyFileRatio() const { return this->tinyFileRatio_ != nullptr;};
    void deleteTinyFileRatio() { this->tinyFileRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileRatio & tinyFileRatio() const { DARABONBA_PTR_GET_CONST(tinyFileRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileRatio tinyFileRatio() { DARABONBA_PTR_GET(tinyFileRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTinyFileRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileRatio & tinyFileRatio) { DARABONBA_PTR_SET_VALUE(tinyFileRatio_, tinyFileRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTinyFileRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileRatio && tinyFileRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileRatio_, tinyFileRatio) };


    // totalDataDayGrowthSize Field Functions 
    bool hasTotalDataDayGrowthSize() const { return this->totalDataDayGrowthSize_ != nullptr;};
    void deleteTotalDataDayGrowthSize() { this->totalDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(totalDataDayGrowthSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataDayGrowthSize totalDataDayGrowthSize() { DARABONBA_PTR_GET(totalDataDayGrowthSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTotalDataDayGrowthSize(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTotalDataDayGrowthSize(Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataDayGrowthSize && totalDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };


    // totalDataSize Field Functions 
    bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
    void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSize & totalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSize) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSize totalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTotalDataSize(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTotalDataSize(Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


    // totalDataSizeDayGrowthRatio Field Functions 
    bool hasTotalDataSizeDayGrowthRatio() const { return this->totalDataSizeDayGrowthRatio_ != nullptr;};
    void deleteTotalDataSizeDayGrowthRatio() { this->totalDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalDataSizeDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio totalDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(totalDataSizeDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio && totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCount & totalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCount) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCount totalFileCount() { DARABONBA_PTR_GET(totalFileCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTotalFileCount(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCount & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTotalFileCount(Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCount && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


    // totalFileCountDayGrowthRatio Field Functions 
    bool hasTotalFileCountDayGrowthRatio() const { return this->totalFileCountDayGrowthRatio_ != nullptr;};
    void deleteTotalFileCountDayGrowthRatio() { this->totalFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalFileCountDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio totalFileCountDayGrowthRatio() { DARABONBA_PTR_GET(totalFileCountDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio && totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };


    // totalFileDayGrowthCount Field Functions 
    bool hasTotalFileDayGrowthCount() const { return this->totalFileDayGrowthCount_ != nullptr;};
    void deleteTotalFileDayGrowthCount() { this->totalFileDayGrowthCount_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(totalFileDayGrowthCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileDayGrowthCount totalFileDayGrowthCount() { DARABONBA_PTR_GET(totalFileDayGrowthCount_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTotalFileDayGrowthCount(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setTotalFileDayGrowthCount(Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileDayGrowthCount && totalFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };


    // warmDataDayGrowthSize Field Functions 
    bool hasWarmDataDayGrowthSize() const { return this->warmDataDayGrowthSize_ != nullptr;};
    void deleteWarmDataDayGrowthSize() { this->warmDataDayGrowthSize_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(warmDataDayGrowthSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataDayGrowthSize warmDataDayGrowthSize() { DARABONBA_PTR_GET(warmDataDayGrowthSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setWarmDataDayGrowthSize(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setWarmDataDayGrowthSize(Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataDayGrowthSize && warmDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };


    // warmDataRatio Field Functions 
    bool hasWarmDataRatio() const { return this->warmDataRatio_ != nullptr;};
    void deleteWarmDataRatio() { this->warmDataRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataRatio & warmDataRatio() const { DARABONBA_PTR_GET_CONST(warmDataRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataRatio warmDataRatio() { DARABONBA_PTR_GET(warmDataRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setWarmDataRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataRatio & warmDataRatio) { DARABONBA_PTR_SET_VALUE(warmDataRatio_, warmDataRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setWarmDataRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataRatio && warmDataRatio) { DARABONBA_PTR_SET_RVALUE(warmDataRatio_, warmDataRatio) };


    // warmDataSize Field Functions 
    bool hasWarmDataSize() const { return this->warmDataSize_ != nullptr;};
    void deleteWarmDataSize() { this->warmDataSize_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSize & warmDataSize() const { DARABONBA_PTR_GET_CONST(warmDataSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSize) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSize warmDataSize() { DARABONBA_PTR_GET(warmDataSize_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setWarmDataSize(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSize & warmDataSize) { DARABONBA_PTR_SET_VALUE(warmDataSize_, warmDataSize) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setWarmDataSize(Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSize && warmDataSize) { DARABONBA_PTR_SET_RVALUE(warmDataSize_, warmDataSize) };


    // warmDataSizeDayGrowthRatio Field Functions 
    bool hasWarmDataSizeDayGrowthRatio() const { return this->warmDataSizeDayGrowthRatio_ != nullptr;};
    void deleteWarmDataSizeDayGrowthRatio() { this->warmDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(warmDataSizeDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio warmDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(warmDataSizeDayGrowthRatio_, Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(const Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };
    inline GetDoctorHDFSClusterResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio && warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };


  protected:
    // The daily increment of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in 90 days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataDayGrowthSize> coldDataDayGrowthSize_ = nullptr;
    // The proportion of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in 90 days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataRatio> coldDataRatio_ = nullptr;
    // The amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in 90 days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSize> coldDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in 90 days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsColdDataSizeDayGrowthRatio> coldDataSizeDayGrowthRatio_ = nullptr;
    // The number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCount> emptyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileCountDayGrowthRatio> emptyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileDayGrowthCount> emptyFileDayGrowthCount_ = nullptr;
    // The proportion of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsEmptyFileRatio> emptyFileRatio_ = nullptr;
    // The daily increment of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataDayGrowthSize> freezeDataDayGrowthSize_ = nullptr;
    // The proportion of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataRatio> freezeDataRatio_ = nullptr;
    // The amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSize> freezeDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio> freezeDataSizeDayGrowthRatio_ = nullptr;
    // The daily increment of the amount of hot data. Hot data refers to data that is accessed in recent seven days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataDayGrowthSize> hotDataDayGrowthSize_ = nullptr;
    // The proportion of hot data. Hot data refers to data that is accessed in recent seven days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataRatio> hotDataRatio_ = nullptr;
    // The amount of hot data. Hot data refers to data that is accessed in recent seven days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSize> hotDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of hot data. Hot data refers to data that is accessed in recent seven days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsHotDataSizeDayGrowthRatio> hotDataSizeDayGrowthRatio_ = nullptr;
    // The number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCount> largeFileCount_ = nullptr;
    // The day-to-day growth rate of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileCountDayGrowthRatio> largeFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileDayGrowthCount> largeFileDayGrowthCount_ = nullptr;
    // The proportion of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsLargeFileRatio> largeFileRatio_ = nullptr;
    // The number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCount> mediumFileCount_ = nullptr;
    // The day-to-day growth rate of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileCountDayGrowthRatio> mediumFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileDayGrowthCount> mediumFileDayGrowthCount_ = nullptr;
    // The proportion of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsMediumFileRatio> mediumFileRatio_ = nullptr;
    // The number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCount> smallFileCount_ = nullptr;
    // The day-to-day growth rate of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileCountDayGrowthRatio> smallFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileDayGrowthCount> smallFileDayGrowthCount_ = nullptr;
    // The proportion of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsSmallFileRatio> smallFileRatio_ = nullptr;
    // The number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCount> tinyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileCountDayGrowthRatio> tinyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileDayGrowthCount> tinyFileDayGrowthCount_ = nullptr;
    // The proportion of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsTinyFileRatio> tinyFileRatio_ = nullptr;
    // The daily incremental of the total data volume.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataDayGrowthSize> totalDataDayGrowthSize_ = nullptr;
    // The total amount of data.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSize> totalDataSize_ = nullptr;
    // The day-to-day growth rate of the total data volume.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalDataSizeDayGrowthRatio> totalDataSizeDayGrowthRatio_ = nullptr;
    // The total number of files.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCount> totalFileCount_ = nullptr;
    // The day-to-day growth rate of the total number of files.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileCountDayGrowthRatio> totalFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the total number of files.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsTotalFileDayGrowthCount> totalFileDayGrowthCount_ = nullptr;
    // The daily increment of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in 30 days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataDayGrowthSize> warmDataDayGrowthSize_ = nullptr;
    // The proportion of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in 30 days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataRatio> warmDataRatio_ = nullptr;
    // The amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in 30 days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSize> warmDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in 30 days.
    std::shared_ptr<Models::GetDoctorHDFSClusterResponseBodyDataMetricsWarmDataSizeDayGrowthRatio> warmDataSizeDayGrowthRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
