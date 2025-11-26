// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHDFSDIRECTORIESRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHDFSDIRECTORIESRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSize.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSize.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSize.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSize.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSize.hpp>
#include <alibabacloud/models/ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHDFSDirectoriesResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHDFSDirectoriesResponseBodyDataMetrics& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDoctorHDFSDirectoriesResponseBodyDataMetrics& obj) { 
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
    ListDoctorHDFSDirectoriesResponseBodyDataMetrics() = default ;
    ListDoctorHDFSDirectoriesResponseBodyDataMetrics(const ListDoctorHDFSDirectoriesResponseBodyDataMetrics &) = default ;
    ListDoctorHDFSDirectoriesResponseBodyDataMetrics(ListDoctorHDFSDirectoriesResponseBodyDataMetrics &&) = default ;
    ListDoctorHDFSDirectoriesResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHDFSDirectoriesResponseBodyDataMetrics() = default ;
    ListDoctorHDFSDirectoriesResponseBodyDataMetrics& operator=(const ListDoctorHDFSDirectoriesResponseBodyDataMetrics &) = default ;
    ListDoctorHDFSDirectoriesResponseBodyDataMetrics& operator=(ListDoctorHDFSDirectoriesResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coldDataDayGrowthSize_ == nullptr
        && return this->coldDataSize_ == nullptr && return this->coldDataSizeDayGrowthRatio_ == nullptr && return this->emptyFileCount_ == nullptr && return this->emptyFileCountDayGrowthRatio_ == nullptr && return this->emptyFileDayGrowthCount_ == nullptr
        && return this->freezeDataDayGrowthSize_ == nullptr && return this->freezeDataSize_ == nullptr && return this->freezeDataSizeDayGrowthRatio_ == nullptr && return this->hotDataDayGrowthSize_ == nullptr && return this->hotDataSize_ == nullptr
        && return this->hotDataSizeDayGrowthRatio_ == nullptr && return this->largeFileCount_ == nullptr && return this->largeFileCountDayGrowthRatio_ == nullptr && return this->largeFileDayGrowthCount_ == nullptr && return this->mediumFileCount_ == nullptr
        && return this->mediumFileCountDayGrowthRatio_ == nullptr && return this->mediumFileDayGrowthCount_ == nullptr && return this->smallFileCount_ == nullptr && return this->smallFileCountDayGrowthRatio_ == nullptr && return this->smallFileDayGrowthCount_ == nullptr
        && return this->tinyFileCount_ == nullptr && return this->tinyFileCountDayGrowthRatio_ == nullptr && return this->tinyFileDayGrowthCount_ == nullptr && return this->totalDataDayGrowthSize_ == nullptr && return this->totalDataSize_ == nullptr
        && return this->totalDataSizeDayGrowthRatio_ == nullptr && return this->totalFileCount_ == nullptr && return this->totalFileCountDayGrowthRatio_ == nullptr && return this->totalFileDayGrowthCount_ == nullptr && return this->warmDataDayGrowthSize_ == nullptr
        && return this->warmDataSize_ == nullptr && return this->warmDataSizeDayGrowthRatio_ == nullptr; };
    // coldDataDayGrowthSize Field Functions 
    bool hasColdDataDayGrowthSize() const { return this->coldDataDayGrowthSize_ != nullptr;};
    void deleteColdDataDayGrowthSize() { this->coldDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(coldDataDayGrowthSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataDayGrowthSize coldDataDayGrowthSize() { DARABONBA_PTR_GET(coldDataDayGrowthSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setColdDataDayGrowthSize(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setColdDataDayGrowthSize(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataDayGrowthSize && coldDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };


    // coldDataSize Field Functions 
    bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
    void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSize & coldDataSize() const { DARABONBA_PTR_GET_CONST(coldDataSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSize) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSize coldDataSize() { DARABONBA_PTR_GET(coldDataSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setColdDataSize(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSize & coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setColdDataSize(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSize && coldDataSize) { DARABONBA_PTR_SET_RVALUE(coldDataSize_, coldDataSize) };


    // coldDataSizeDayGrowthRatio Field Functions 
    bool hasColdDataSizeDayGrowthRatio() const { return this->coldDataSizeDayGrowthRatio_ != nullptr;};
    void deleteColdDataSizeDayGrowthRatio() { this->coldDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(coldDataSizeDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSizeDayGrowthRatio coldDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(coldDataSizeDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSizeDayGrowthRatio && coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };


    // emptyFileCount Field Functions 
    bool hasEmptyFileCount() const { return this->emptyFileCount_ != nullptr;};
    void deleteEmptyFileCount() { this->emptyFileCount_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCount & emptyFileCount() const { DARABONBA_PTR_GET_CONST(emptyFileCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCount) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCount emptyFileCount() { DARABONBA_PTR_GET(emptyFileCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setEmptyFileCount(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCount & emptyFileCount) { DARABONBA_PTR_SET_VALUE(emptyFileCount_, emptyFileCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setEmptyFileCount(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCount && emptyFileCount) { DARABONBA_PTR_SET_RVALUE(emptyFileCount_, emptyFileCount) };


    // emptyFileCountDayGrowthRatio Field Functions 
    bool hasEmptyFileCountDayGrowthRatio() const { return this->emptyFileCountDayGrowthRatio_ != nullptr;};
    void deleteEmptyFileCountDayGrowthRatio() { this->emptyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(emptyFileCountDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio emptyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(emptyFileCountDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio && emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };


    // emptyFileDayGrowthCount Field Functions 
    bool hasEmptyFileDayGrowthCount() const { return this->emptyFileDayGrowthCount_ != nullptr;};
    void deleteEmptyFileDayGrowthCount() { this->emptyFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(emptyFileDayGrowthCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileDayGrowthCount emptyFileDayGrowthCount() { DARABONBA_PTR_GET(emptyFileDayGrowthCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setEmptyFileDayGrowthCount(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setEmptyFileDayGrowthCount(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileDayGrowthCount && emptyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };


    // freezeDataDayGrowthSize Field Functions 
    bool hasFreezeDataDayGrowthSize() const { return this->freezeDataDayGrowthSize_ != nullptr;};
    void deleteFreezeDataDayGrowthSize() { this->freezeDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(freezeDataDayGrowthSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataDayGrowthSize freezeDataDayGrowthSize() { DARABONBA_PTR_GET(freezeDataDayGrowthSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setFreezeDataDayGrowthSize(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setFreezeDataDayGrowthSize(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataDayGrowthSize && freezeDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };


    // freezeDataSize Field Functions 
    bool hasFreezeDataSize() const { return this->freezeDataSize_ != nullptr;};
    void deleteFreezeDataSize() { this->freezeDataSize_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSize & freezeDataSize() const { DARABONBA_PTR_GET_CONST(freezeDataSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSize) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSize freezeDataSize() { DARABONBA_PTR_GET(freezeDataSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setFreezeDataSize(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSize & freezeDataSize) { DARABONBA_PTR_SET_VALUE(freezeDataSize_, freezeDataSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setFreezeDataSize(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSize && freezeDataSize) { DARABONBA_PTR_SET_RVALUE(freezeDataSize_, freezeDataSize) };


    // freezeDataSizeDayGrowthRatio Field Functions 
    bool hasFreezeDataSizeDayGrowthRatio() const { return this->freezeDataSizeDayGrowthRatio_ != nullptr;};
    void deleteFreezeDataSizeDayGrowthRatio() { this->freezeDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(freezeDataSizeDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio freezeDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(freezeDataSizeDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio && freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };


    // hotDataDayGrowthSize Field Functions 
    bool hasHotDataDayGrowthSize() const { return this->hotDataDayGrowthSize_ != nullptr;};
    void deleteHotDataDayGrowthSize() { this->hotDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(hotDataDayGrowthSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataDayGrowthSize hotDataDayGrowthSize() { DARABONBA_PTR_GET(hotDataDayGrowthSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setHotDataDayGrowthSize(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setHotDataDayGrowthSize(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataDayGrowthSize && hotDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };


    // hotDataSize Field Functions 
    bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
    void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSize & hotDataSize() const { DARABONBA_PTR_GET_CONST(hotDataSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSize) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSize hotDataSize() { DARABONBA_PTR_GET(hotDataSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setHotDataSize(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSize & hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setHotDataSize(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSize && hotDataSize) { DARABONBA_PTR_SET_RVALUE(hotDataSize_, hotDataSize) };


    // hotDataSizeDayGrowthRatio Field Functions 
    bool hasHotDataSizeDayGrowthRatio() const { return this->hotDataSizeDayGrowthRatio_ != nullptr;};
    void deleteHotDataSizeDayGrowthRatio() { this->hotDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(hotDataSizeDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSizeDayGrowthRatio hotDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(hotDataSizeDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSizeDayGrowthRatio && hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };


    // largeFileCount Field Functions 
    bool hasLargeFileCount() const { return this->largeFileCount_ != nullptr;};
    void deleteLargeFileCount() { this->largeFileCount_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCount & largeFileCount() const { DARABONBA_PTR_GET_CONST(largeFileCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCount) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCount largeFileCount() { DARABONBA_PTR_GET(largeFileCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setLargeFileCount(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCount & largeFileCount) { DARABONBA_PTR_SET_VALUE(largeFileCount_, largeFileCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setLargeFileCount(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCount && largeFileCount) { DARABONBA_PTR_SET_RVALUE(largeFileCount_, largeFileCount) };


    // largeFileCountDayGrowthRatio Field Functions 
    bool hasLargeFileCountDayGrowthRatio() const { return this->largeFileCountDayGrowthRatio_ != nullptr;};
    void deleteLargeFileCountDayGrowthRatio() { this->largeFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(largeFileCountDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCountDayGrowthRatio largeFileCountDayGrowthRatio() { DARABONBA_PTR_GET(largeFileCountDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCountDayGrowthRatio && largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };


    // largeFileDayGrowthCount Field Functions 
    bool hasLargeFileDayGrowthCount() const { return this->largeFileDayGrowthCount_ != nullptr;};
    void deleteLargeFileDayGrowthCount() { this->largeFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(largeFileDayGrowthCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileDayGrowthCount largeFileDayGrowthCount() { DARABONBA_PTR_GET(largeFileDayGrowthCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setLargeFileDayGrowthCount(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setLargeFileDayGrowthCount(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileDayGrowthCount && largeFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };


    // mediumFileCount Field Functions 
    bool hasMediumFileCount() const { return this->mediumFileCount_ != nullptr;};
    void deleteMediumFileCount() { this->mediumFileCount_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCount & mediumFileCount() const { DARABONBA_PTR_GET_CONST(mediumFileCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCount) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCount mediumFileCount() { DARABONBA_PTR_GET(mediumFileCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setMediumFileCount(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCount & mediumFileCount) { DARABONBA_PTR_SET_VALUE(mediumFileCount_, mediumFileCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setMediumFileCount(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCount && mediumFileCount) { DARABONBA_PTR_SET_RVALUE(mediumFileCount_, mediumFileCount) };


    // mediumFileCountDayGrowthRatio Field Functions 
    bool hasMediumFileCountDayGrowthRatio() const { return this->mediumFileCountDayGrowthRatio_ != nullptr;};
    void deleteMediumFileCountDayGrowthRatio() { this->mediumFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(mediumFileCountDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCountDayGrowthRatio mediumFileCountDayGrowthRatio() { DARABONBA_PTR_GET(mediumFileCountDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCountDayGrowthRatio && mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };


    // mediumFileDayGrowthCount Field Functions 
    bool hasMediumFileDayGrowthCount() const { return this->mediumFileDayGrowthCount_ != nullptr;};
    void deleteMediumFileDayGrowthCount() { this->mediumFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(mediumFileDayGrowthCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileDayGrowthCount mediumFileDayGrowthCount() { DARABONBA_PTR_GET(mediumFileDayGrowthCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setMediumFileDayGrowthCount(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setMediumFileDayGrowthCount(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileDayGrowthCount && mediumFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };


    // smallFileCount Field Functions 
    bool hasSmallFileCount() const { return this->smallFileCount_ != nullptr;};
    void deleteSmallFileCount() { this->smallFileCount_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCount & smallFileCount() const { DARABONBA_PTR_GET_CONST(smallFileCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCount) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCount smallFileCount() { DARABONBA_PTR_GET(smallFileCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setSmallFileCount(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCount & smallFileCount) { DARABONBA_PTR_SET_VALUE(smallFileCount_, smallFileCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setSmallFileCount(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCount && smallFileCount) { DARABONBA_PTR_SET_RVALUE(smallFileCount_, smallFileCount) };


    // smallFileCountDayGrowthRatio Field Functions 
    bool hasSmallFileCountDayGrowthRatio() const { return this->smallFileCountDayGrowthRatio_ != nullptr;};
    void deleteSmallFileCountDayGrowthRatio() { this->smallFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(smallFileCountDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCountDayGrowthRatio smallFileCountDayGrowthRatio() { DARABONBA_PTR_GET(smallFileCountDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCountDayGrowthRatio && smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };


    // smallFileDayGrowthCount Field Functions 
    bool hasSmallFileDayGrowthCount() const { return this->smallFileDayGrowthCount_ != nullptr;};
    void deleteSmallFileDayGrowthCount() { this->smallFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(smallFileDayGrowthCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileDayGrowthCount smallFileDayGrowthCount() { DARABONBA_PTR_GET(smallFileDayGrowthCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setSmallFileDayGrowthCount(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setSmallFileDayGrowthCount(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileDayGrowthCount && smallFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };


    // tinyFileCount Field Functions 
    bool hasTinyFileCount() const { return this->tinyFileCount_ != nullptr;};
    void deleteTinyFileCount() { this->tinyFileCount_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCount & tinyFileCount() const { DARABONBA_PTR_GET_CONST(tinyFileCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCount) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCount tinyFileCount() { DARABONBA_PTR_GET(tinyFileCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTinyFileCount(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCount & tinyFileCount) { DARABONBA_PTR_SET_VALUE(tinyFileCount_, tinyFileCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTinyFileCount(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCount && tinyFileCount) { DARABONBA_PTR_SET_RVALUE(tinyFileCount_, tinyFileCount) };


    // tinyFileCountDayGrowthRatio Field Functions 
    bool hasTinyFileCountDayGrowthRatio() const { return this->tinyFileCountDayGrowthRatio_ != nullptr;};
    void deleteTinyFileCountDayGrowthRatio() { this->tinyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(tinyFileCountDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCountDayGrowthRatio tinyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(tinyFileCountDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCountDayGrowthRatio && tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };


    // tinyFileDayGrowthCount Field Functions 
    bool hasTinyFileDayGrowthCount() const { return this->tinyFileDayGrowthCount_ != nullptr;};
    void deleteTinyFileDayGrowthCount() { this->tinyFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(tinyFileDayGrowthCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileDayGrowthCount tinyFileDayGrowthCount() { DARABONBA_PTR_GET(tinyFileDayGrowthCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTinyFileDayGrowthCount(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTinyFileDayGrowthCount(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileDayGrowthCount && tinyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };


    // totalDataDayGrowthSize Field Functions 
    bool hasTotalDataDayGrowthSize() const { return this->totalDataDayGrowthSize_ != nullptr;};
    void deleteTotalDataDayGrowthSize() { this->totalDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(totalDataDayGrowthSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataDayGrowthSize totalDataDayGrowthSize() { DARABONBA_PTR_GET(totalDataDayGrowthSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTotalDataDayGrowthSize(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTotalDataDayGrowthSize(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataDayGrowthSize && totalDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };


    // totalDataSize Field Functions 
    bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
    void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSize & totalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSize) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSize totalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTotalDataSize(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTotalDataSize(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


    // totalDataSizeDayGrowthRatio Field Functions 
    bool hasTotalDataSizeDayGrowthRatio() const { return this->totalDataSizeDayGrowthRatio_ != nullptr;};
    void deleteTotalDataSizeDayGrowthRatio() { this->totalDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalDataSizeDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio totalDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(totalDataSizeDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio && totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCount & totalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCount) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCount totalFileCount() { DARABONBA_PTR_GET(totalFileCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTotalFileCount(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCount & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTotalFileCount(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCount && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


    // totalFileCountDayGrowthRatio Field Functions 
    bool hasTotalFileCountDayGrowthRatio() const { return this->totalFileCountDayGrowthRatio_ != nullptr;};
    void deleteTotalFileCountDayGrowthRatio() { this->totalFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalFileCountDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCountDayGrowthRatio totalFileCountDayGrowthRatio() { DARABONBA_PTR_GET(totalFileCountDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCountDayGrowthRatio && totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };


    // totalFileDayGrowthCount Field Functions 
    bool hasTotalFileDayGrowthCount() const { return this->totalFileDayGrowthCount_ != nullptr;};
    void deleteTotalFileDayGrowthCount() { this->totalFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(totalFileDayGrowthCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileDayGrowthCount totalFileDayGrowthCount() { DARABONBA_PTR_GET(totalFileDayGrowthCount_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTotalFileDayGrowthCount(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setTotalFileDayGrowthCount(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileDayGrowthCount && totalFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };


    // warmDataDayGrowthSize Field Functions 
    bool hasWarmDataDayGrowthSize() const { return this->warmDataDayGrowthSize_ != nullptr;};
    void deleteWarmDataDayGrowthSize() { this->warmDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(warmDataDayGrowthSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataDayGrowthSize warmDataDayGrowthSize() { DARABONBA_PTR_GET(warmDataDayGrowthSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setWarmDataDayGrowthSize(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setWarmDataDayGrowthSize(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataDayGrowthSize && warmDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };


    // warmDataSize Field Functions 
    bool hasWarmDataSize() const { return this->warmDataSize_ != nullptr;};
    void deleteWarmDataSize() { this->warmDataSize_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSize & warmDataSize() const { DARABONBA_PTR_GET_CONST(warmDataSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSize) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSize warmDataSize() { DARABONBA_PTR_GET(warmDataSize_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setWarmDataSize(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSize & warmDataSize) { DARABONBA_PTR_SET_VALUE(warmDataSize_, warmDataSize) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setWarmDataSize(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSize && warmDataSize) { DARABONBA_PTR_SET_RVALUE(warmDataSize_, warmDataSize) };


    // warmDataSizeDayGrowthRatio Field Functions 
    bool hasWarmDataSizeDayGrowthRatio() const { return this->warmDataSizeDayGrowthRatio_ != nullptr;};
    void deleteWarmDataSizeDayGrowthRatio() { this->warmDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(warmDataSizeDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio warmDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(warmDataSizeDayGrowthRatio_, Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(const Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };
    inline ListDoctorHDFSDirectoriesResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio && warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };


  protected:
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataDayGrowthSize> coldDataDayGrowthSize_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSize> coldDataSize_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsColdDataSizeDayGrowthRatio> coldDataSizeDayGrowthRatio_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCount> emptyFileCount_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio> emptyFileCountDayGrowthRatio_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsEmptyFileDayGrowthCount> emptyFileDayGrowthCount_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataDayGrowthSize> freezeDataDayGrowthSize_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSize> freezeDataSize_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio> freezeDataSizeDayGrowthRatio_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataDayGrowthSize> hotDataDayGrowthSize_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSize> hotDataSize_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsHotDataSizeDayGrowthRatio> hotDataSizeDayGrowthRatio_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCount> largeFileCount_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileCountDayGrowthRatio> largeFileCountDayGrowthRatio_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsLargeFileDayGrowthCount> largeFileDayGrowthCount_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCount> mediumFileCount_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileCountDayGrowthRatio> mediumFileCountDayGrowthRatio_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsMediumFileDayGrowthCount> mediumFileDayGrowthCount_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCount> smallFileCount_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileCountDayGrowthRatio> smallFileCountDayGrowthRatio_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsSmallFileDayGrowthCount> smallFileDayGrowthCount_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCount> tinyFileCount_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileCountDayGrowthRatio> tinyFileCountDayGrowthRatio_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTinyFileDayGrowthCount> tinyFileDayGrowthCount_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataDayGrowthSize> totalDataDayGrowthSize_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSize> totalDataSize_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio> totalDataSizeDayGrowthRatio_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCount> totalFileCount_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileCountDayGrowthRatio> totalFileCountDayGrowthRatio_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsTotalFileDayGrowthCount> totalFileDayGrowthCount_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataDayGrowthSize> warmDataDayGrowthSize_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSize> warmDataSize_ = nullptr;
    std::shared_ptr<Models::ListDoctorHDFSDirectoriesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio> warmDataSizeDayGrowthRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
